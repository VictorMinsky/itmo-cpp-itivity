#include "st_petersburg.h"

#include <iostream>
#include <string>

int main(int argc, char ** argv)
{
    unsigned long runs = 1000000;
    double bankroll = 1000000;
    if (argc > 1) {
        runs = std::stoul(argv[1]);
        if (argc > 2) {
            bankroll = std::stod(argv[2]);
        }
    }
    std::cout << calculate_expected_value(runs, bankroll) << std::endl;
}
