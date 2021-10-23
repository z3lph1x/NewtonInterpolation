//
// Created by dubro on 21.10.2021.
//
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#ifndef VI_9_32_NEWTON_HPP
#define VI_9_32_NEWTON_HPP

class Newton{
private:
    vector<double> x;
    vector<double> y;
    vector<double> diff;

    double difference(double k, int first, int last);
};




#endif //VI_9_32_NEWTON_HPP
