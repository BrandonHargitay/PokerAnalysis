#include <iostream>
#include "Deck.h"
#include "CardHand.h"
#include "PokerScore.h"
#include "CardHandScorer.h"
#include "Drawables/CardDrawable.h"
#include "Drawables/CardHandDrawable.h"

int main() {
    srand((unsigned int)time(NULL));

    PokerScore total;
    for(int i = 0; i < 70000; i++){
        Deck d3;
        d3.shuffle();

        CardHand p1;

        for(int j = 0; j < 5; j++){
            p1.addCard(d3.dealCard());
//            p2.addCard(d3.dealCard());
//            p3.addCard(d3.dealCard());
//            p4.addCard(d3.dealCard());
//            p5.addCard(d3.dealCard());
        }
    CardHandScorer::handScore(p1);

    }

    std::cout << total;


    //Displays window

    Deck d2;
    d2.shuffle();
    sf::RenderWindow window({1920, 1080, 32},"Top Hat Guy");
    window.setFramerateLimit(60);
    CardDrawable c (d2.getCardAt(0).getSuit(), d2.getCardAt(0).getRank());
    CardDrawable c2 (d2.getCardAt(1).getSuit(), d2.getCardAt(1).getRank());
    CardDrawable c3 (d2.getCardAt(2).getSuit(), d2.getCardAt(2).getRank());
    CardDrawable c4 (d2.getCardAt(3).getSuit(), d2.getCardAt(3).getRank());
    CardDrawable c5 (d2.getCardAt(4).getSuit(), d2.getCardAt(4).getRank());
    CardHandDrawable p1;
    p1.addCard(c);
    p1.addCard(c2);
    p1.addCard(c3);
    p1.addCard(c4);
    p1.addCard(c5);

    std::cout << d2;
    std::cout << p1;
    //c2.setPosition({500,30});
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
        }
        //c.setPosition({0.f,0.f});
        window.clear(sf::Color(50,168,82));
        window.draw(p1);
        window.display();
    }



return 0;
}
