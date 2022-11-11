//
// Created by Brandon Hargitay on 11/11/22.
//

#include "DrawStatistics.h"
#include "../PokerScore.h"
#include <iostream>
#include <array>

DrawStatistics::DrawStatistics() {
    init();
}

void DrawStatistics::displayStatistics() {
    std::array<int, 10> scores = PokerScore::getScores();
    std::array<std::string,10> scoresToString;

    for(int i = 0; i < 10; i++){
        scoresToString[i] = std::to_string(scores[i]);
    }


    statistics.setFont(font);
    //this is ugly but I could not think of a different way to format the display
    statistics.setString("High Card: " + scoresToString[0] + "          One Pair: " + scoresToString[1] +
                        "           Two Pair: " + scoresToString[2] + "      Three of a kind: " + scoresToString[3] +
                        "\n Straight: "+ scoresToString[4] + "                 Flush: " + scoresToString[5] +
                        "                     Full House: " + scoresToString[6] + "        Four of a Kind: " + scoresToString[7] +
                        "\n                                              Straight: " + scoresToString[8] + "                              Royal Flush: " + scoresToString[9]);
    statistics.setCharacterSize(40);
    statistics.setLineSpacing(3.5);
    statistics.setFillColor(sf::Color::Black);
    statistics.setPosition(120,500);
}
void DrawStatistics::draw(sf::RenderTarget& window, sf::RenderStates states) const{
    window.draw(title);
    window.draw(statistics);
}

void DrawStatistics::init() {
    displayTitle();
    displayStatistics();
}

void DrawStatistics::displayTitle() {
    font.loadFromFile("Drawables/Font/OpenSans-Bold.ttf");
    title.setFont(font);
    title.setString("Poker Analysis");
    title.setPosition({700,60});
    title.setCharacterSize(70);
    title.setFillColor(sf::Color::Black);
}
