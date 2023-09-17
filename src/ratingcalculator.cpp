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
        std::cout<<"Name: "<<it->getName()<<" Actual rating: "<<it->getRating()<<" Additional points on win: " <<getAdditionalPoints(*it,TEAM::BLUE)<<endl;
    }
    cout<<"TEAM RED"<<endl;
    for(auto it=team_red.begin();it!=team_red.end();it++){
        std::cout<<"Name: "<<it->getName()<<" Actual rating: "<<it->getRating()<<" Additional points on win: " <<getAdditionalPoints(*it,TEAM::RED)<<endl;
    }
}

int RatingCalculator::getAverageRating(vPlayer&vP){
    int sum = 0;
    for(auto x:vP){
        sum+=x.getRating();
    }
    return sum/5;
}
void RatingCalculator::setAverageRatings(){
    team_blue_average = getAverageRating(team_blue);
    team_red_average = getAverageRating(team_red);
}

int RatingCalculator::getAdditionalPoints(Player p,int team){
    int additional;
    switch(team){
        case TEAM::BLUE:
        if(p.getRating()>team_red_average)
            additional = BASIC_BONUS-15;
        else
            additional = BASIC_BONUS+15;
        break;
        case TEAM::RED:
        if(p.getRating()>team_red_average)
            additional = BASIC_BONUS-15;
        else
            additional = BASIC_BONUS+15;
        break;
        break;
    }
    return additional;
}
void RatingCalculator::init(){
    setAverageRatings();
}