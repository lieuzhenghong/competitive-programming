#include <iostream>
#include <array>
#include <vector>
#include <queue>

int main() {

    int max_jump;
    int moves_left;
    int dist_left;

    int current_house = 1;

    std::cin >> max_jump >> moves_left >> dist_left;

    max_jump = max_jump - 1;

    if (dist_left > moves_left * max_jump) {
        std::cout << "NO";
        return 0;
    }

    else if ( dist_left < moves_left ) {
        std::cout << "NO";
        return 0;
    }

    else {
        std::cout << "YES" << std::endl;
    }

    while (dist_left - max_jump >= (moves_left-1))
    {
        // Do a max jump
        dist_left -= max_jump;
        moves_left-- ;

        if (current_house > max_jump) {
            current_house -= max_jump;
        }
        else { current_house += max_jump; } ;

        std::cout << current_house << " ";
    }


    if (dist_left > 0 && (dist_left > moves_left)) {
        // Do a small jump... but how?
        // Do a small jump such that dist_left = moves-1
        // After our max jumps, we are guaranteed to be either left or right
        int jump_needed = dist_left - (moves_left-1);
        dist_left -= jump_needed;
        moves_left-- ;
        if (current_house > max_jump) {
            current_house -= jump_needed;
        }
        else { current_house += jump_needed; } ;
        std::cout << current_house << " ";
        //std::cout << "Distance remaining: " << dist_left << " " << moves_left << std::endl;
    }

    // Now we fill the remaining jumps with 1s
    while (moves_left > 0) {
        dist_left -= 1;
        moves_left--;
        if (current_house > max_jump) {
            current_house--;
        }
        else if (current_house == 1) {
            current_house++;
        }
        else {
            current_house++;
        }
        std::cout << current_house << " ";
    }

    return 0;
}