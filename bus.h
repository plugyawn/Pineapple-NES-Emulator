#include <cstdint>
#include "pineapple6502.h"
#include <array>
// // This is the C Standard Integer library; renames the standard types into EXPLICT types.

class bus{
    public:
        bus();
        ~bus();
    
    public: // Devices connected to the bus
        pineapple6502 cpu;
        std::array<uint8_t, 64*1024> ram{};


    public: // Bus read and write functions
        void write(uint16_t a, uint8_t d); // no return, 16-bit address for writing and 8-bit data to be written
        uint8_t read(uint16_t addr, bool bReadOnly = false); // returns 8-bit integer, looks for 16-bit address;
        // **COMEBACK** what is bReadOnly?
        // No need to emulate the read-write signal --> implied by which function it's called.
        // We're either writing to the bus, or reading from the bus.
    uint8_t read(uint16_t a);
};