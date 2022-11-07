#include <iostream>
#include "Deck.h"
#include "SuitENum.h"
#include "RankENum.h"

int main() {
    Deck d;

    std::cout << d;

    std::cout << d.dealCard();
    std::cout << d.dealCard();

}
