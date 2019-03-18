#include "../cpptrim.h"
#include <algorithm> // std::copy
#include <cstdlib> // EXIT_SUCCESS
#include <iostream> // std::cout


void test(std::string str) {
    std::string trimmed(str);
    cpptrim::trim(trimmed);

    std::string ltrimmed(str);
    cpptrim::trim_left(ltrimmed);

    std::string rtrimmed(str);
    cpptrim::trim_right(rtrimmed);

    std::cout << "=============" << std::endl;
    std::cout << "Untrimmed    : \"" << str << "\"" << std::endl;
    std::cout << "Trimmed      : \"" << trimmed << "\"" << std::endl;
    std::cout << "Left Trimmed : \"" << ltrimmed << "\"" << std::endl;
    std::cout << "Right Trimmed: \"" << rtrimmed << "\"" << std::endl;
    std::cout << "=============" << std::endl << std::endl;
}

int main() {
    test(" Hello Spaces! ");
    test("\tHello TABs!\t");
    test("\nHello LFs!\t");
    test("\rHello CRs!\r");
    test("\r\nHello CRLFs!\r\n");
    test("\vHello VTs!\v");
    test("\fHello FFs!\f");
    test(" \t\n\v\f\rHello Whitespace! \t\n\v\f\r");
    return EXIT_SUCCESS;
}
