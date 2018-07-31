#include <iostream>
#include <array>
#include <vector>

int main () 
{
    int axis[101];
    int num_segments;
    int max;

    int seg_start;
    int seg_end;

    int points_not_in_segment = 0;

    std::cin >> num_segments >> max;
    //std::cout << "Max: " << max << std::endl;

    for (int a = 0; a < 101; a++ ) {
        axis[a] = 0;
    }

    while (std::cin >> seg_start >> seg_end) {
        for (int i = seg_start; i < seg_end + 1; i ++) {
            //std::cout << "Filling in " << i << std::endl;
            axis[i] = 1;
        }
    }

    for (int j = 1; j < max + 1; j++) {
        //std::cout << j << std::endl;
        if (axis[j] == 0) {
            points_not_in_segment++;
        }
    }

    std::cout << points_not_in_segment << std::endl;

    for (int k = 1; k < max + 1; k++) {
        if (axis[k] == 0) {std::cout << k << " " ;}
    }

    return 0;
}