#ifndef THROW_THE_BALL_HPP
#define THROW_THE_BALL_HPP

#include <iostream>
#include <map>
using namespace std;

class ThrowTheBall {
public:
    static int timesThrown(int N, int M, int L) {
        int throw_count = 0;
        map<int, int> player_catches;

        for (int i = 0; i <= N; i++) {
            player_catches[i + 1] = 0;
        }

        int current_player = 1;

        while (true) { // Changed to while loop as game only ends upon p = M
            player_catches[current_player]++;

            if (player_catches[current_player] == M) {
                break;
            }

            throw_count++;

            if (player_catches[current_player] % 2 == 0) {
                current_player = (current_player - L + N) % N;
            }
            else {
                current_player = (current_player + L) % N;
            }
        }

        return throw_count;
    }

};

#endif