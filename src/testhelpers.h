// Header File for help functions 
#ifndef TEST_HELPERS_H
#define TEST_HELPERS_H

#include <cstdint>

uint16_t makeXYN(int opcode, int x, int y, int n) {
    return (opcode << 12) | (x<<8) | (y<<4) | n;
}

uint16_t makeXNN(int opcode, int x, int nn) {
    return (opcode << 12) | (x<<8) | nn;
}

uint16_t makeNNN(int opcode, int nnn) {
    return (opcode << 12) | nnn;
}

#endif