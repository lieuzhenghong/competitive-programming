#include <iostream>
#include <array>
#include <vector>
#include <queue>

typedef std::pair<int, int> song;

int main() 
{
    int max_size = 0;
    int min_size = 0;

    auto cmp = [](song a, song b) { return (a.first - a.second ) < (b.first - b.second); };
    std::priority_queue<song, std::vector<song>, decltype(cmp)> songs(cmp);

    int total_max_size = 0;
    int total_min_size = 0;

    int num_songs = 0;
    int capacity = 0;

    int current_song = 0;
    int current_size = 0;
    int compressions_needed = 0;

    std::cin >> num_songs >> capacity;

    while (std::cin >> max_size >> min_size) {
        total_max_size += max_size;
        total_min_size += min_size;
        song s = {max_size, min_size};
        //std::cout << "Song: " << max_size << " " << min_size << std::endl;
        songs.push(s);
    }

    // Greedy algorithm
    current_size = total_max_size;

    if (total_min_size > capacity) {
      std::cout << -1;  
      return 0;
    } 
    else if (total_max_size <= capacity) {
        std::cout << 0;
        return 0;
    }
    else {
        while (current_size > capacity) {
            //std::cout << "Current size: " << current_size << std::endl;
            //std::cout << "Song: " << songs.top().first << songs.top().second << std::endl ;
            current_size += songs.top().second - songs.top().first;
            //std::cout << "Current size now: " << current_size << std::endl;
            songs.pop();
            compressions_needed++;
        }
    }

    std::cout << compressions_needed;
    return 0;
}