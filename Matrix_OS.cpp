#include <stdio.h>
#include "pico/stdlib.h"

extern uint8_t __flash_binary_end;

int main()
{
    stdio_init_all();

    stdio_init_all();
    std::cout << "_______________________________________________________________________________________________________________\nled-matrix boot up..." << std::endl;
    // Print binary flash information
    uint8_t* binary_end = &__flash_binary_end;
    uint32_t binary_size = (uint32_t)(binary_end - XIP_BASE);
    std::cout << "Binary end at: " << (void *)binary_end << " with " << binary_size << " bytes in size." << std::endl;
}
