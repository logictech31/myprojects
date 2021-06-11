;;; switching to protected mode

[bits 16]
switch_to_32bit:
    cli                     ; 1. disable interrupts
    lgdt [gdt_descriptor]   ; 2. load GDT descriptor in cr0
    mov eax, cr0            ; mov value of cr0 to eax
; eax = 32-bit accumulator or extended ax
    or eax, 0x1             ; 3. enable protected mode
    mov cr0, eax
; cr = control register
    jmp CODE_SEG:init_32bit ; jump to segment at offset
; 4. far jump to clear the pre-fetch queue
; the pre-fetch queue consists of many instructions. When instruction jmp/goto
; is called, it clears the incoming instructions

[bits 32]
init_32bit:
    mov ax, DATA_SEG        ; 5. update segment registers
    mov ds, ax              ; 'ds' data segment updated by accumulator
    mov ss, ax              ; 'ss' stack segment updated by accumulator
    mov es, ax              ; 'es' extra segment updated "
    mov fs, ax              ; 'fs' extra segment udpated "
    mov gs, ax              ; 'gs' extra segment updated "

    mov ebp, 0x90000        ; 6. setup stack
    mov esp, ebp

    call BEGIN_32BIT        ; 7. move back to mbr.asm