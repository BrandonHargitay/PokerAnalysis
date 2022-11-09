//
// Created by Brandon Hargitay on 11/7/22.
//

#include "CardHandScorer.h"

CardHandScorer::CardHandScorer() {

}

void CardHandScorer::sort(CardHand &hand) {
    std::sort(hand.getHand().begin(), hand.getHand().end());
}
