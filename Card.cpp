//
// Created by Brandon Hargitay on 11/6/22.
//

#include "Card.h"

std::string Card::getSuit() {
    return suitToString();
}

std::string Card::getRank() {
    return rankToString();
}

void Card::setSuit(SuitENum suit) {
    this->suit = suit;
}

void Card::setRank(RankENum rank) {
    this->rank = rank;
}
Card::Card(SuitENum suit, RankENum rank) : suit(suit), rank(rank) {}

Card::Card() : Card(SPADES, ACE) {}

std::string Card::rankToString() const {
    switch (rank) {
        case ACE: return  "Ace";
        case KING: return  "King";
        case QUEEN: return  "Queen";
        case JACK: return  "Jack";
        case TEN: return  "Ten";
        case NINE: return  "9";
        case EIGHT: return  "8";
        case SEVEN: return  "7";
        case SIX: return  "6";
        case FIVE: return  "5";
        case FOUR: return  "4";
        case THREE: return  "3";
        case TWO: return  "2";
    }
}

std::string Card::suitToString() const {
    switch (suit) {
        case HEARTS: return "Hearts";
        case DIAMONDS: return "Diamonds";
        case CLUBS: return "Clubs";
        case SPADES: return "Spades";
    }
}
