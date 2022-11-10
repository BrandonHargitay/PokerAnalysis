#include <iostream>
#include "Deck.h"
#include "CardHand.h"
#include "PokerScore.h"
#include "CardHandScorer.h"

int main() {
    srand((unsigned int)time(NULL));

    PokerScore total;

    for(int i = 0; i < 600000; i++){
        Deck d3;
        d3.shuffle();

        CardHand p1,p2,p3,p4,p5;

        for(int j = 0; j < 5; j++){
            p1.addCard(d3.dealCard());
            p2.addCard(d3.dealCard());
            p3.addCard(d3.dealCard());
            p4.addCard(d3.dealCard());
            p5.addCard(d3.dealCard());
        }
    CardHandScorer::handScore(p1);

    }

    std::cout << total;



return 0;
}
