//
// Created by Brandon Hargitay on 11/6/22.
//

#include "CardHand.h"

CardHand::CardHand() : cardIndex(0) {}

void CardHand::addCard(Card card) {
    hand.push_back(card);
}

Card CardHand::getNextCard() {
    return hand[cardIndex++];
}
