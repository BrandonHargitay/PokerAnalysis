#include <iostream>
#include "Deck.h"
#include "CardHand.h"

int main() {
    Deck d;
    CardHand p1;

    std::cout << d;

    //std::cout << d.dealCard();
    p1.addCard(d.dealCard());
    p1.addCard(d.dealCard());
    p1.addCard(d.dealCard());
    p1.addCard(d.dealCard());
    p1.addCard(d.dealCard());
    std::cout << p1;

    p1.sort();
    std::cout << p1;
}
