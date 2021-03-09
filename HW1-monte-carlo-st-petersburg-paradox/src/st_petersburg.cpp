#include "st_petersburg.h"
#include "random_gen.h"


bool make_flip() {
    // Heads = [0;0.5), Tails = (0.5; 1], edge = {0.5} to make Heads/Tails = 50%/50%
    return get_random_number() > 0.5;
}

double calculate_expected_value(const unsigned long runs, const double bankroll) {
    // Initial bet-win value
    const double INITIAL_BET = 2;
    // Sum of winnings of all runs
    long double price_to_pay = 0;

    for (unsigned long int i = 0; i < runs; i++) {
        // Current winnings before first flip
        long double current_win = INITIAL_BET;
        // While doubled bet < bankroll and Tails
        while (current_win < bankroll && make_flip()) {
            // Double our winnings
            current_win *= 2;
        }
        // Add current run winnings bounded by bankroll to all
        price_to_pay += (current_win > bankroll ? bankroll : current_win);
    }

    // Return fair price of entrance if runs > 0, else 0
    return runs > 0 ? price_to_pay / runs : 0;
}
