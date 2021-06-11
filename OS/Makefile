# $@ = target file
# $< = first dependency
# $^ = all dependencies

# First rule is the one executed when no parameters are fed to the Makefile
# Step 1: executes run
# Step 2: run starts creating os_image.bin
# Step 3: os_image.bin starts creating primaryBoot.bin and kernel_1.bin
# Step 4: primaryBoot.bin assembles primaryBoot.asm using nasm
# Step 5: kernel_1.bin creates kernel_entry.o and kernel_1.o
# Step 6: kernel_entry.o assembles kernel_entry.asm using nasm
# Step 7: kernel_1.o compiles kernel_1.c using gcc
# Step 8: links kernel_entry.o and kernel_1.o to create kernel_1.bin
# Step 9: joins primaryBoot.bin with kernel_1.bin creating os_image.bin
# Step 10: executes 80386 emulator and runs the OS
all: run

kernel_1.bin: kernel_entry.o kernel_1.o displayDriver.o
	ld -m elf_i386 -o $@ -Ttext 0x1000 $^ --oformat binary

kernel_entry.o: kernel_entry.asm
	nasm $< -f elf -o $@

displayDriver.o: displayDriver.c
#	-fno-pic keeps a relocatable binary
	gcc -fno-pic -m32 -ffreestanding -c $< -o $@

kernel_1.o: kernel_1.c
	gcc -fno-pic -m32 -ffreestanding -c $< -o $@

# Disassemble the binary file and shows source code
kernel_1.dis: kernel_1.bin
	ndisasm -b 32 $< > $@

primaryBoot.bin: primaryBoot.asm
	nasm $< -f bin -o $@

os_image.bin: primaryBoot.bin kernel_1.bin
	cat $^ > $@

run: os_image.bin
	qemu-system-i386.exe -fda $<

echo: os_image.bin
	xxd $<

clean:
	$(RM) *.bin *.o *.dis