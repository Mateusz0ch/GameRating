#ifndef RATINGCALCULATOR_HPP
#define RATINGCALCULATOR_HPP
#define BASIC_BONUS 100
#include "player.hpp"
#include <vector>
#include <numeric>

using std::cout;
using std::endl;

typedef std::vector<Player> vPlayer;

enum TEAM{
    RED=1,BLUE
};

class RatingCalculator{
    vPlayer team_blue;
    vPlayer team_red;
    int team_blue_average;
    int team_red_average;
    public:
    RatingCalculator();
    void addPlayer(Player&);
    void displayAllPlayers();
    int getAverageRating(vPlayer &);
};
#endif