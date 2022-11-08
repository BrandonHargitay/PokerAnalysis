//
// Created by Brandon Hargitay on 11/7/22.
//

#ifndef POKER_CARDHANDSCORER_H
#define POKER_CARDHANDSCORER_H
#include <iostream>
#include "CardHand.h"

class CardHandScorer {
public:
    CardHandScorer();
private:
    static PokerScore handScore(CardHand hand);
    static void displayScored(const PokerScore& score)
};


#endif //POKER_CARDHANDSCORER_H
