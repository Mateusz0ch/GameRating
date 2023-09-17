#include <iostream>

#include "src/player.cpp"
#include "src/ratingcalculator.cpp"

int main(){
    RatingCalculator calculator;
    srand(time(NULL));
    Player p1{"Player1_BLUE"};
    Player p2{"Player2_BLUE"};
    Player p3{"Player3_BLUE"};
    Player p4{"Player4_BLUE"};
    Player p5{"Player5_BLUE"};

    Player p6{"Player1_RED"};
    Player p7{"Player2_RED"};
    Player p8{"Player3_RED"};
    Player p9{"Player4_RED"};
    Player p10{"Player5_RED"};

    calculator.addPlayer(p1);
    calculator.addPlayer(p2);
    calculator.addPlayer(p3);
    calculator.addPlayer(p4);
    calculator.addPlayer(p5);
    calculator.addPlayer(p6);
    calculator.addPlayer(p7);
    calculator.addPlayer(p8);
    calculator.addPlayer(p9);
    calculator.addPlayer(p10);

    calculator.init();
    calculator.displayAllPlayers();
}