//CPU Implementation 
#include "cpu.h"

CPU::CPU() {}

void CPU::LoadProgram(uint8_t* program, int size) {
    for (int i = 0; i < size; i++) {
        program[i] = Memory[i];
    }
    PC = 0x200;
}