#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "interface.hpp"

#include <iostream>

class Player:public Name,public Rating{
    int _rating;
    string _name;
    public:
    Player(string name,int rating);
    int getRating()const override;
    string getName()const override;
};

#endif