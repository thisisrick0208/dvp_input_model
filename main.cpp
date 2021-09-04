#include "systemc.h"

int sc_main(int, char *[])
{
    //signals and clocks
    sc_signal<bool> pclk;
    sc_signal<bool> hsync;
    sc_signal<bool> vsync;
    sc_signal<bool> xclk;
    sc_signal<int32_t> scl;
    sc_signal<int32_t> sda;

    //data
    sc_signal<int8_t> data;

    

}