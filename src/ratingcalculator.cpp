#include "../includes/ratingcalculator.hpp"

RatingCalculator::RatingCalculator(){};

void RatingCalculator::addPlayer(Player&p){
    
    if(team_blue.size()<5)
        team_blue.push_back(p);
    else if(team_red.size()<5)
        team_red.push_back(p);
}

void RatingCalculator::displayAllPlayers(){
    cout<<"TEAM BLUE"<<endl;
    for(auto it=team_blue.begin();it!=team_blue.end();it++){
        std::cout<<"Name: "<<it->getName()<<" Actual rating: "<<it->getRating()<<endl;
    }
    cout<<"TEAM RED"<<endl;
    for(auto it=team_red.begin();it!=team_red.end();it++){
        std::cout<<"Name: "<<it->getName()<<" Actual rating: "<<it->getRating()<<endl;
    }
}

int RatingCalculator::getAverageRating(vPlayer&vP){
    int sum = 0;
    return sum;
}
