#include "../includes/player.hpp"
Player::Player(string name):_name(name){

    int random = rand()%10000+1;
    _rating = random;
    std::cout<<"Created player - name: "<<name<<" rating: "<<_rating<<std::endl;
}

int Player::getRating()const{
    return _rating;
}

string Player::getName()const{
    return _name;
}