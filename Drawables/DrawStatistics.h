//
// Created by Brandon Hargitay on 11/11/22.
//

#ifndef POKER_DRAWSTATISTICS_H
#define POKER_DRAWSTATISTICS_H
#include <SFML/Graphics.hpp>

class DrawStatistics : public sf::Text{
public:
    void displayStatistics();
    DrawStatistics();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
private:
    sf::Font font;
    sf::Text title;
    sf::Text statistics;
    void init();
    void displayTitle();

};


#endif //POKER_DRAWSTATISTICS_H
