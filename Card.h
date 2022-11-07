//
// Created by Brandon Hargitay on 11/6/22.
//

#ifndef POKER_CARD_H
#define POKER_CARD_H
#include "RankENum.h"
#include "SuitENum.h"

#include <iostream>

class Card {
public:
    std::string getSuit();
    std::string getRank();
    void setSuit(SuitENum suit);
    void setRank(RankENum rank);
    std::string rankToString() const;
    std::string suitToString() const;
    Card(SuitENum suit, RankENum string);
    Card();
private:
    SuitENum suit;
    RankENum rank;
    friend std::ostream& operator<<(std::ostream& out, const Card& card);

};


#endif //POKER_CARD_H
