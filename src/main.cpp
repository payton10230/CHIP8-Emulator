/*Wanted to try making a CPU emulator after finding out about it online. We'll see how it goes.
I have no idea what I'm doing, but I guess that's the point of this project. 9/21/26
*/
#include "cpu.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    uint8_t testProgram[] = {0x12, 0x34, 0x56, 0x78};
    int tpLength = sizeof(testProgram) / sizeof(testProgram[0]);
    
    CPU cpu = CPU();
    cpu.LoadProgram(testProgram, tpLength);
    for (int i = 0x200; i<0x200+tpLength; i++) {
        cout<<hex<<(int)cpu.getMemory(i)<<" ";
    }

    cout<<"running\n";

    return 0;
}