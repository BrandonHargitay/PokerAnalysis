cmake_minimum_required(VERSION 3.23)
project(Poker)

set(CMAKE_CXX_STANDARD 14)

add_executable(Poker main.cpp Deck.cpp Deck.h Card.cpp Card.h SuitENum.h RankENum.h CardHand.cpp CardHand.h)
