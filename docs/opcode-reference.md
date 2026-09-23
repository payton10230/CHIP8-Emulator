//Just to keep this part in one place to make understand a bit easier

1NNN - jump to NNN

3XNN - skip next if VX == NN
4XNN - skip next if VX != NN
5XY0 - skip next if VX == VY
6XNN - VX = NN
7XNN - VX += NN

9XY0 - skip next if VX != VY

ANNN - I = NNN

//NOT YET IMPLEMENTED (JUST MOVE AS COMPLETED)
2NNN - Call subroutine at NNN
00EE - Return from subroutine
00E0 - Clear the screen
8XY0-8XYE - Register-to-register ops (assign, OR, AND, XOR, add w/ carry, subtract, shifts)
BNNN - Jump to NNN + V0
CXNN - Set VX = random number AND NN
DXYN - Draw sprite
EX9E/EXA1 - Skip based on key press
FX07-FX65 - Timers, key wait, memory ops, BCD, font