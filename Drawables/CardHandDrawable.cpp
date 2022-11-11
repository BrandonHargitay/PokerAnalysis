//
// Created by Brandon Hargitay on 11/10/22.
//

#include "CardHandDrawable.h"

CardHandDrawable::CardHandDrawable() {

}

void CardHandDrawable::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    for(CardDrawable c : drawableHand){
        window.draw(c);
    }
}

void CardHandDrawable::position() {

        drawableHand[0].setPosition({100.f,300.f});
        drawableHand[1].setPosition({300.f,300.f});
        drawableHand[2].setPosition({500.f,300.f});
        drawableHand[3].setPosition({700.f,300.f});
        drawableHand[4].setPosition({900.f,300.f});
}

void CardHandDrawable::addCard(CardDrawable card) {
    drawableHand.push_back(card);
}

std::ostream& operator<<(std::ostream& out, const CardHandDrawable& card){

    for (int i = 0; i < 5; i++){
        out << "\n" << card.drawableHand[i].rankToString() << " of " << card.drawableHand[i].suitToString();
    }
    return out;
}