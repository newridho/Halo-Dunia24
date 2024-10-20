    .section __TEXT,__text,regular,pure_instructions
    .globl _start

_start:
    sub     sp, sp, #16

    mov     w0, #'H'
    strb    w0, [sp]
    mov     w0, #'e'
    strb    w0, [sp, #1]
    mov     w0, #'l'
    strb    w0, [sp, #2]
    mov     w0, #'l'
    strb    w0, [sp, #3]
    mov     w0, #'o'
    strb    w0, [sp, #4]
    mov     w0, #' '
    strb    w0, [sp, #5]
    mov     w0, #'W'
    strb    w0, [sp, #6]
    mov     w0, #'o'
    strb    w0, [sp, #7]
    mov     w0, #'r'
    strb    w0, [sp, #8]
    mov     w0, #'l'
    strb    w0, [sp, #9]
    mov     w0, #'d'
    strb    w0, [sp, #10]
    mov     w0, #'\n'
    strb    w0, [sp, #11]

    // Prepare for syscall
    mov     w0, #1
    add     x1, sp, #0
    mov     w2, #12

    // Syscall number for write
    movz    x16, #0x2000, lsl #16
    movk    x16, #0x0004
    svc     #0

    // Exit syscall
    mov     x0, #0
    movz    x16, #0x2000, lsl #16
    movk    x16, #0x0001
    svc     #0

    //to run, save the file and run these following commands in terminal(using "HelloWorld" as an example for file name)
    //as -o HelloWorld.o HelloWorld.S
    //ld -macos_version_min 15.0.0 -o HelloWorld HelloWorld.o -lSystem -syslibroot `xcrun -sdk macosx --show-sdk-path` -e _start -arch arm64
    //./HelloWorld
