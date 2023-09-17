#include "../includes/player.hpp"
Player::Player(string name,int rating):_name(name),_rating(rating){
    std::cout<<"Created player - name: "<<name<<" rating: "<<rating<<std::endl;
}

int Player::getRating()const{
    return _rating;
}

string Player::getName()const{
    return _name;
}