#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include <string>

using std::string;

class Name{
    virtual string getName()const = 0;
};
class Rating{
    virtual int getRating()const = 0;
};
#endif