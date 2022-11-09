//
// Created by Brandon Hargitay on 11/8/22.
//

#include "PokerScore.h"


bool PokerScore::isRoyalFlush(CardHand hand) {
    return false;
}

bool PokerScore::isStraightFLush(CardHand hand) {
    return false;
}

bool PokerScore::isFourOfKind(CardHand hand) {
    return false;
}

bool PokerScore::isFullHouse(CardHand hand) {
    return false;
}

bool PokerScore::isFlush(CardHand hand) {
    return false;
}

bool PokerScore::isStraight(CardHand hand) {
    int count = 0;

    //check for A-K-Q-J-10
    if(((hand.getNextCard(0) == RankENum::ACE) && (hand.getNextCard(1) == RankENum::TEN))
    &&((hand.getNextCard(2) == RankENum::JACK) && ((hand.getNextCard(3) == RankENum::QUEEN))
    && (hand.getNextCard(4) == RankENum::KING))) return true;

    //check combinations that go all the way down to A-2-3-4-5
    for (int i = 0; i < hand.getSize() - 1; i++){
        if(hand.getNextCard(i) + 1 == hand.getNextCard(i+1)){
            count++;
        }
        if(count == 4) return true;
    }
    return false;
}

bool PokerScore::isThreeofKind(CardHand hand) {
    for(int i = 0; i < 3; i++){
        if((hand.getNextCard(i) == hand.getNextCard(i+1))
        && (hand.getNextCard(i+1) == hand.getNextCard(i+2))){
            return true;
        }
    }
    return false;
}

bool PokerScore::isTwoPair(CardHand hand) {
    int count = 0;
    for (int i = 0; i < hand.getSize() - 1; i++) {
        if(hand.getNextCard(i) == hand.getNextCard(i+1)){
            count++;
            i++;
            if(count == 2) return true;
        }
    }
    return false;
}

bool PokerScore::isOnePair(CardHand hand) {

    for(int i = 0; i < hand.getSize() - 1; i++){
        if(hand.getNextCard(i) == hand.getNextCard(i+1)){
            return true;
        }
    }
    return false;
}

bool PokerScore::isHighCard(CardHand hand) {
    if(hand.getSize() > 0 ){
        return true;
    }
    return false;
}
