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

    cout<<"running\n";

    uint8_t testEqual[] = {0x60, 0x05, 0x30, 0x05};
    CPU cpu1 = CPU();
    cpu1.LoadProgram(testEqual, 4);
    cpu1.Cycle();
    cpu1.Cycle();
    cout<<hex<<cpu1.getPC()<<endl;

    uint8_t testNotEqual[] = {0x40, 0x05, 0x30, 0x09};
    CPU cpu2 = CPU();
    cpu2.LoadProgram(testNotEqual, 4);
    cpu2.Cycle();
    cpu2.Cycle();
    cout<<hex<<cpu2.getPC()<<endl;


    return 0;
}