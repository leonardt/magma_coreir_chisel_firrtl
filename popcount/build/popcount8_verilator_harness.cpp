#include "VPopCount8.h"
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
    VPopCount8* top = new VPopCount8;
    top-> I =  0;
    top->eval();
    check(" O", top-> O,  0, 0);
    top-> I =  1;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  2;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  3;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  4;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  5;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  6;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  7;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  8;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  9;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  10;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  11;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  12;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  13;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  14;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  15;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  16;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  17;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  18;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  19;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  20;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  21;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  22;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  23;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  24;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  25;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  26;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  27;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  28;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  29;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  30;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  31;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  32;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  33;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  34;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  35;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  36;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  37;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  38;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  39;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  40;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  41;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  42;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  43;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  44;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  45;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  46;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  47;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  48;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  49;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  50;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  51;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  52;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  53;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  54;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  55;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  56;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  57;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  58;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  59;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  60;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  61;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  62;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  63;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  64;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  65;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  66;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  67;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  68;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  69;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  70;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  71;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  72;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  73;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  74;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  75;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  76;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  77;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  78;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  79;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  80;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  81;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  82;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  83;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  84;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  85;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  86;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  87;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  88;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  89;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  90;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  91;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  92;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  93;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  94;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  95;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  96;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  97;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  98;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  99;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  100;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  101;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  102;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  103;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  104;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  105;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  106;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  107;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  108;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  109;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  110;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  111;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  112;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  113;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  114;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  115;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  116;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  117;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  118;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  119;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  120;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  121;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  122;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  123;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  124;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  125;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  126;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  127;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  128;
    top->eval();
    check(" O", top-> O,  1, 0);
    top-> I =  129;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  130;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  131;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  132;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  133;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  134;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  135;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  136;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  137;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  138;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  139;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  140;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  141;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  142;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  143;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  144;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  145;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  146;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  147;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  148;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  149;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  150;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  151;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  152;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  153;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  154;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  155;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  156;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  157;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  158;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  159;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  160;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  161;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  162;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  163;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  164;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  165;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  166;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  167;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  168;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  169;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  170;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  171;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  172;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  173;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  174;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  175;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  176;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  177;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  178;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  179;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  180;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  181;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  182;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  183;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  184;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  185;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  186;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  187;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  188;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  189;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  190;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  191;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  192;
    top->eval();
    check(" O", top-> O,  2, 0);
    top-> I =  193;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  194;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  195;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  196;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  197;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  198;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  199;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  200;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  201;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  202;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  203;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  204;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  205;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  206;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  207;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  208;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  209;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  210;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  211;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  212;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  213;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  214;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  215;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  216;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  217;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  218;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  219;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  220;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  221;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  222;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  223;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  224;
    top->eval();
    check(" O", top-> O,  3, 0);
    top-> I =  225;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  226;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  227;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  228;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  229;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  230;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  231;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  232;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  233;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  234;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  235;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  236;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  237;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  238;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  239;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  240;
    top->eval();
    check(" O", top-> O,  4, 0);
    top-> I =  241;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  242;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  243;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  244;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  245;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  246;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  247;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  248;
    top->eval();
    check(" O", top-> O,  5, 0);
    top-> I =  249;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  250;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  251;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  252;
    top->eval();
    check(" O", top-> O,  6, 0);
    top-> I =  253;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  254;
    top->eval();
    check(" O", top-> O,  7, 0);
    top-> I =  255;
    top->eval();
    check(" O", top-> O,  8, 0);
}
