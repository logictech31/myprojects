disk_load:
    pusha       ; pushes all the flags
    push dx     ; pushes data register

    mov ah, 0x02 ; read data from disk
    mov al, dh ;
    mov cl, 0x02 ; setting and starting from sector 2
                 ; as sector 1 is our boot sector
    mov ch, 0x00 ; setting cylinder 0
    mov dh, 0x00 ; setting head 0
    mov dl, 0x00 ; to read from floppy where we are going to compile the code

    ; dl = drive number is set as input to disk_load
    ; es:bx = buffer pointer is set as input as well

    int 0x13    ; BIOS interrupt
    jc disk_error ; check carry bit for error

    pop dx  ; get back original number of sectors to read
    cmp al, dh ; BIOS sets 'al' to the # of sectors actually read
               ; compare it to 'dh' and error out if they are not equal
    jne sectors_error
    popa
    ret

disk_error:
    jmp disk_loop

sectors_error:
    jmp disk_loop

disk_loop:
    jmp $