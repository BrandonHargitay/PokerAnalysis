#include <iostream>
#include "Deck.h"
#include "CardHand.h"
#include "PokerScore.h"

int main() {
    srand((unsigned int)time(NULL));

    int high = 0;
    int onePair = 0;
    int twoPair = 0;
    int threeKind = 0;
    int straight = 0;
    int flush = 0;
    int fullHouse = 0;
    int fourKind = 0;
    int straightFlush = 0;
    int royalFlush = 0;
    for(int i = 0; i < 600000; i++){
        Deck d;
        d.shuffle();

        CardHand p1;


        p1.addCard(d.dealCard());
        p1.addCard(d.dealCard());
        p1.addCard(d.dealCard());
        p1.addCard(d.dealCard());
        p1.addCard(d.dealCard());
        p1.sort();

        if(PokerScore::isHighCard(p1) == 1) high++;
        if(PokerScore::isOnePair(p1) == 1) onePair++;
        if(PokerScore::isTwoPair(p1) == 1) twoPair++;
        if(PokerScore::isThreeofKind(p1) == 1) threeKind++;
        if(PokerScore::isStraight(p1) == 1) straight++;
        if(PokerScore::isFlush(p1) == 1) flush++;
        if(PokerScore::isFullHouse(p1) == 1) fullHouse++;
        if(PokerScore::isFourOfKind(p1) == 1) fourKind++;
        if(PokerScore::isStraightFLush(p1) == 1) straightFlush++;
        if(PokerScore::isRoyalFlush(p1) == 1) royalFlush++;
    }

    std::cout << "High: " << high << "\n";
    std::cout << "One Pair: " << onePair << "\n";
    std::cout << "Two Pair: " << twoPair << "\n";
    std::cout << "Three Kind: " << threeKind << "\n";
    std::cout << "Straight: " << straight << "\n";
    std::cout << "Flush: " << flush << "\n";
    std::cout << "Full House: " << fullHouse << "\n";
    std::cout << "Four of a kind: " << fourKind << "\n";
    std::cout << "Straight Flush: " << straightFlush << "\n";
    std::cout << "Royal Flush: " << royalFlush << "\n";

}
