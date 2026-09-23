/*Wanted to try making a CPU emulator after finding out about it online. We'll see how it goes.
I have no idea what I'm doing, but I guess that's the point of this project. 9/21/26
*/
#include "cpu.h"
#include "testhelpers.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    uint8_t testProgram[] = {0x12, 0x34, 0x56, 0x78};
    int tpLength = sizeof(testProgram) / sizeof(testProgram[0]);
    
    CPU cpu = CPU();
    
    cpu.Decode(makeXNN(0x6,0xA,0x3F));
    cout<<hex<<(int)cpu.getRegister(0xA)<<endl;

    cpu.Decode(makeXNN(0x7,0xA,0x01));
    cout<<hex<<(int)cpu.getRegister(0xA)<<endl;

    cpu.Decode(makeNNN(0xA, 0x234));
    cout<<hex<<(int)cpu.getI()<<endl;

    cpu.Decode(makeXYN(0x5,0xA,0xB,0x0));
    cout<<hex<<(int)cpu.getPC()<<endl;




    return 0;
}