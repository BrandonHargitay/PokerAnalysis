//
// Created by Brandon Hargitay on 11/6/22.
//

#ifndef POKER_CARD_H
#define POKER_CARD_H
#include "RankENum.h"
#include "SuitENum.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Card : public sf::Drawable, sf::Transformable{
public:
    std::string rankToString() const;
    std::string suitToString() const;
    SuitENum getSuit();
    Card(SuitENum suit, RankENum string);
    Card();
private:
    SuitENum suit;
    RankENum rank;
    friend std::ostream& operator<<(std::ostream& out, const Card& card);
    friend bool operator>(const Card &c1, const Card &c2);
    friend bool operator<(const Card &c1, const Card &c2);
    friend bool operator==(const Card &c1, const Card &c2);
    friend bool operator==(const Card &c1, const int &n);
    friend bool operator==( const int &n, const Card &c1);
    friend int operator+(const Card &c1, const int &n);
    friend int operator+(const int &n,const Card &c1);
};


#endif //POKER_CARD_H
