cmake_minimum_required(VERSION 3.23)
project(Poker)

set(CMAKE_CXX_STANDARD 14)

add_executable(Poker main.cpp Deck.cpp Deck.h Card.cpp Card.h SuitENum.h RankENum.h CardHand.cpp CardHand.h CardHandScorer.cpp CardHandScorer.h PokerScore.cpp PokerScore.h Drawables/CardDrawable.h Drawables/CardDrawable.cpp Drawables/CardHandDrawable.cpp Drawables/CardHandDrawable.h Drawables/DrawStatistics.cpp Drawables/DrawStatistics.h)

target_link_libraries(Poker sfml-graphics sfml-audio)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)