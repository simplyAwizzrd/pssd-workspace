#ifndef INCHWORM_HPP
#define INCHWORM_HPP

#include <iostream>

using namespace std;

class Inchworm {
public:
    static int lunchtime(int branch, int rest, int leaf) {
        int leaves_eaten = 0;

        for (int i = 0; i <= branch; i += rest) {
            if (i % leaf == 0) {
                leaves_eaten++;
            }
        }

        return leaves_eaten;
    }
};

#endif