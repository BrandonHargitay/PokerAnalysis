//
// Created by Brandon Hargitay on 11/7/22.
//

#include "CardHandScorer.h"

CardHandScorer::CardHandScorer() {

}

void CardHandScorer::sort(CardHand &hand) {
    std::sort(hand.getHand().begin(), hand.getHand().end());
}

PokerScore CardHandScorer::handScore(CardHand hand) {
//    PokerScore scores;
//    hand.sort();
//
//    if(PokerScore::isHighCard(hand) == 1) scores.addScore(PokerScore::HIGH_CARD);
//    if(PokerScore::isOnePair(hand) == 1) scores.addScore(PokerScore::ONE_PAIR);
//    if(PokerScore::isTwoPair(hand) == 1) scores.addScore(PokerScore::TWO_PAIR);
//    if(PokerScore::isThreeofKind(hand) == 1) scores.addScore(PokerScore::THREE_OK_A_KIND);
//    if(PokerScore::isStraight(hand) == 1) scores.addScore(PokerScore::STRAIGHT);
//    if(PokerScore::isFlush(hand) == 1) scores.addScore(PokerScore::FLUSH);
//    if(PokerScore::isFullHouse(hand) == 1) scores.addScore(PokerScore::FULL_HOUSE);
//    if(PokerScore::isFourOfKind(hand) == 1) scores.addScore(PokerScore::FOUR_OF_A_KIND);
//    if(PokerScore::isStraightFLush(hand) == 1) scores.addScore(PokerScore::STRAIGHT_FLUSH);
//    if(PokerScore::isRoyalFlush(hand) == 1) scores.addScore(PokerScore::ROYAL_FLUSH);
//
//    return scores;

}
