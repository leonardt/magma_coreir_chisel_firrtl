#include "VCounter4R.h"
#include "verilated.h"
#include <cassert>
#include <iostream>

void check(const char* port, int a, int b, int cycle) {
    if (!(a == b)) {
        std::cerr << "Got      : " << a << std::endl;
        std::cerr << "Expected : " << b << std::endl;
        std::cerr << "Cycle    : " << cycle << std::endl;
        std::cerr << "Port     : " << port << std::endl;
        exit(1);
    }
}

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    VCounter4R* top = new VCounter4R;
    top->RESET = 0;
    top->eval();
    check("O", top->O, 0, 0);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 0, 1);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 1, 2);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 2, 3);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 3, 4);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 4, 5);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 5, 6);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 6, 7);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 7, 8);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 8, 9);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 9, 10);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 10, 11);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 11, 12);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 12, 13);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 13, 14);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 14, 15);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 0, 16);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 1, 17);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 2, 18);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 3, 19);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 4, 20);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 5, 21);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 6, 22);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 7, 23);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 8, 24);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 9, 25);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 10, 26);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 11, 27);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 12, 28);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 13, 29);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 14, 30);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 0, 31);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
}
