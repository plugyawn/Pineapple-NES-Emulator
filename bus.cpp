#include "bus.h"

bus::bus(){
    // Clear RAM and set to 0
    // iterates through standard array
    for (auto &iter : ram) iter = 0x00;

    // connect CPU to the comms bus
    cpu.connect_bus(this);
}


bus::~bus()= default;

void bus::write(uint16_t addr, uint8_t data){
    if(addr>=0x0000  && addr<=0xFFFF) ram[addr] = data; // guarding the RAM. Prevents overflow/underflow
}

uint8_t bus::read(uint16_t addr){
    if(addr>0x0000 && addr<=0xFFFF) return ram[addr]; // take address and return what is at that position in RAM array
    else return 0x0000;  // return 0 if overflow/underflow
}


