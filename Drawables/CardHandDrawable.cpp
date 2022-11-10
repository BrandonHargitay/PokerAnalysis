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
    for(int i = 0; i < drawableHand.size(); i++){
        drawableHand[i];
    }
}

void CardHandDrawable::addCard(CardDrawable card) {
    drawableHand.push_back(card);
}

std::ostream& operator<<(std::ostream& out, const CardHandDrawable& card){

    for (int i = 0; i < 5; i++){
        out << "\n" << card.drawableHand[i].rankToString() << " of ";
    }
    return out;
}