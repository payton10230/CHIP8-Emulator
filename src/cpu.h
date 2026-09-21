//CPU HEADER WITH SIMPLE VARIABLES AND FUNCTIONS
#ifndef CPU_H
#define CPU_H
#include <cstdint>

using namespace std;

class CPU {
    private:
        uint8_t Memory[4096]; //4KB of memory
        uint8_t V[16]; // 16 8-bit registers
        uint16_t PC; //Program Counter
        uint16_t I; //Index Register
        uint16_t Stack[16]; //Stack for eventual subroutine calls
        uint8_t SP; //Stack Pointer ("how many things are currently on the stack")

    public:
        CPU(); //Constructor
        void LoadProgram(uint8_t* program, int size); //Load a program into memory
};

#endif