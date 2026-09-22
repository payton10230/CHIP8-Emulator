//CPU Implementation 
#include "cpu.h"

CPU::CPU() {
    for (int i = 0; i<4096; i++) {
        Memory[i] = 0;
    }
    for (int i = 0; i<16; i++) {
        V[i] = 0;
    }
    PC = 0;
    I = 0;
    SP = 0;
}

void CPU::LoadProgram(uint8_t* program, int size) {
    for (int i = 0; i < size; i++) {
        Memory[0x200 +i] = program[i];
    }
    PC = 0x200;
}

uint8_t CPU::getMemory(uint16_t val) {
    return Memory[val];
}

uint16_t CPU::Fetch() {
    return (Memory[PC]<<8) | Memory[PC+1];
}

void CPU::Decode(uint16_t val) {
    int first = (val & 0xF000) >> 12;
//check implementation when next available
    switch (first) {
        case 0x6:
            int x = (val & 0x0F00) >> 8;
            int nn = val & 0x00FF;
            V[x] = nn;
            break;
        default:
            cout<<"Not Found.\n";
            break;
    }

    
}