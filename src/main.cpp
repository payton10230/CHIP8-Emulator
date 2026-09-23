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
    cpu.LoadProgram(testProgram, tpLength);

    cpu.Decode(makeNNN(0x2,0x300));
    cout<<hex<<cpu.getPC()<<endl;

    cpu.Decode(makeXNN(0x0, 0, 0xGOtEE));
    cout<<hex<<cpu.getPC()<<endl;




    return 0;
}