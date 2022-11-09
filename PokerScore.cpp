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
    return false;
}

bool PokerScore::isThreeofKind(CardHand hand) {
    return false;
}

bool PokerScore::IsTwoPair(CardHand hand) {
    return false;
}

bool PokerScore::isOnePair(CardHand hand) {

    for(int i = 0; i < hand.getSize(); i++){
        if(hand.getNextCard(i).getRank() == hand.getNextCard(i+1).getRank()){
            return true;
        }
    }
    return false;
}

bool PokerScore::isHighCard(CardHand hand) {
    if(hand.getSize() >0 ){
        return true;
    }
    return false;
}
