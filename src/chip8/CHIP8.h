class CHIP8 {
    unsigned short opcode; // current opcode
    unsigned char memory[4096]; // memory
    unsigned char V[16]; // registers

    unsigned short I; // index register
    unsigned short pc; // program counter

    unsigned char gfx[64 * 32]; // graphics

    unsigned char delayTimer; // delay timer
    unsigned char soundTimer; // sound timer

    unsigned short stack[16]; // stack
    unsigned short sp; // stack pointer

    unsigned char keyPad[16]; // keypad

};