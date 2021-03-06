#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
private:
    string name;
    int power_level;
    string model;
    string favorite_food;

public:
    Robot(string name,int power_level,string model, string favorite_food);
    string getName();
    int getPowerLevel();
    string getModel();
    string getFavorite_food();
    virtual ~Robot();
};

#endif // ROBOT_H
