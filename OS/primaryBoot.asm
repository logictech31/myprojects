[bits 16]
[org 0x7c00]

; where to load the kernel to
KERNEL_OFFSET equ 0x1111

; BIOS sets boot drive in 'dl'; store for later use
mov [BOOT_DRIVE], dl

; setup stack
mov bp, 0x9000 ; bottom stack pointer
mov sp, bp	   ; top stack pointer

call load_kernel
mov     ax,0x2401                ; A20-Gate Activate
int     0x15					 ; The A20 pin is used to 
; is used to access 32-bit, you need to activate this pin
; in order to access 32-bit bus
call switch_to_32bit

jmp $

%include "disk.asm"
%include "gdt.asm"
%include "switch_to_32bit.asm"

[bits 16]
load_kernel:
    mov bx, KERNEL_OFFSET ; bx -> destination
    mov dh, 2             ; dh -> num sectors
    mov dl, [BOOT_DRIVE]  ; dl -> disk
    call disk_load
    ret

[bits 32]
BEGIN_32BIT:
    call KERNEL_OFFSET ; give control to the kernel
    jmp $ ; loop in case kernel returns

; boot drive variable
BOOT_DRIVE db 0

; padding
times 510 - ($-$$) db 0

; magic number
dw 0xaa55