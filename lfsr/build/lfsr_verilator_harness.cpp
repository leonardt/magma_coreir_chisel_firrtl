#include "Vlfsr81False.h"
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
    Vlfsr81False* top = new Vlfsr81False;
    top->RESET = 0;
    top->eval();
    check("O", top->O, 0, 0);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 1, 1);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 2, 2);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 4, 3);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 8, 4);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 17, 5);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 35, 6);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 71, 7);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 142, 8);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 28, 9);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 56, 10);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 113, 11);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 226, 12);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 196, 13);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 137, 14);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 18, 15);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 37, 16);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 75, 17);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 151, 18);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 46, 19);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 92, 20);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 184, 21);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 112, 22);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 224, 23);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 192, 24);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 129, 25);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 3, 26);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 6, 27);
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
    check("O", top->O, 25, 29);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 50, 30);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
    top->RESET = 1;
    top->eval();
    check("O", top->O, 100, 31);
    top->CLK = 0;
    top->eval();
    top->CLK = 1;
    top->eval();
}
