;;; GDT stands for Global Descriptor Table
;;; gdt_start and gdt_end are used to compute size

; null segment descriptor
gdt_start:
    dq 0x0 ; 'dq' = Quad word which equates to 4 words.
           ; 1 word =  2 0's (2 bytes) i.e. 4 words = 8 0's (8 bytes)

; code segment descriptor (cs)
; for more reference, go to chapter 3 of subject DTM
gdt_code:
    dw 0xffff   ; segment length, 0-15 bits
    dw 0x0      ; segment base, 0-15 bits
    db 0x0      ; segment base, 16-23 bits
                ; = total 24-bits
    db 10011010b ; flags (8 bits) A = 0 RW = 1 CE = 0 Type = 1, DPL = 00
                 ; P = 1
    db 11001111b ; flags (4 bits) + segment length, 16-19 bits AVL = 0 L = 0 
                 ; D/B = 1 G = 1
    db 0x0      ; segment base, 24-31 bits

; data segment descriptor
gdt_data:
    dw 0xffff    ; segment length, bits 0-15
    dw 0x0       ; segment base, bits 0-15
    db 0x0       ; segment base, bits 16-23
    db 10010010b ; flags (8 bits) A = 0 RW = 1 CE = 0 Type = 0, 1, DPL = 00
                 ; P = 1
    db 11001111b ; flags (4 bits) + segment length, bits 16-19 AVL = 0 L = 0 
                 ; D/B = 1 G = 1
    db 0x0       ; segment base, bits 24-31

gdt_end:
    
    ; GDT descriptor
    gdt_descriptor:
        dw gdt_end - gdt_start - 1 ; size(16 bit)
        dd gdt_start ; address (32 bit)

CODE_SEG equ gdt_code - gdt_start ; CODE_SEG is defined at that location
DATA_SEG equ gdt_data - gdt_start ; DATA_SEG is defined at that location