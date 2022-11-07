//
// Created by Brandon Hargitay on 11/6/22.
//

#include "Deck.h"

Card Deck::dealCard() {
    return Card();
}

Card Deck::getCardAt(int index) {
    return Card();
}

Deck::Deck() {
    init();
}

void Deck::shuffle() {
   srand((unsigned int)time(NULL));
    for (int i = 0; i < DECK_SIZE; i++) {
        int idx = rand() % DECK_SIZE;
        Card temp = deck[i];
        deck[i] = deck[idx];
        deck[idx] = temp;
    }
}

bool Deck::empty() {
    return false;
}

void Deck::fillDeck() {
    SuitENum suit = SPADES;
    RankENum rank = ACE;
    int index = 0;
    for (int i = 0; i < SUIT_MAX; i++) {
        for (int j = 0; j < RANK_MAX; j++) {
            deck[index] = Card(static_cast<SuitENum>(i), static_cast<RankENum>(j+1));

//            switch (i) {
//                case 0:
//                    suit = HEARTS;
//                    break;
//                case 1:
//                    suit = DIAMONDS;
//                    break;
//                case 2:
//                    suit = SPADES;
//                    break;
//                case 3:
//                    suit = CLUBS;
//                    break;
//            }
//            switch (j) {
//                case 0:
//                    rank = ACE;
//                    break;
//                case 1:
//                    rank = TWO;
//                    break;
//                case 2:
//                    rank = THREE;
//                    break;
//                case 3:
//                    rank = FOUR;
//                    break;
//                case 4:
//                    rank = FIVE;
//                    break;
//                case 5:
//                    rank = SIX;
//                    break;
//                case 6:
//                    rank = SEVEN;
//                    break;
//                case 7:
//                    rank = EIGHT;
//                    break;
//                case 8:
//                    rank = NINE;
//                    break;
//                case 9:
//                    rank = TEN;
//                    break;
//                case 10:
//                    rank = JACK;
//                    break;
//                case 11:
//                    rank = QUEEN;
//                    break;
//                case 12:
//                    rank = KING;
//                    break;
//            }
//            deck[index] = Card(suit, rank);
            index++;
        }

    }
}

void Deck::init() {
    fillDeck();
    //shuffle();
}

std::ostream& operator<<(std::ostream& out, const Deck& deck){

    for (int i = 0; i < deck.DECK_SIZE ; i++) {
        out << "\n" << i + 1 << ": " << deck.deck[i].rankToString() << " of " << deck.deck[i].suitToString();
    }
    return out;
}