#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#define ll long long;

struct student
{
    int id;
    int score;
};

bool waytosort(student a, student b)
{
    if (a.score > b.score)
    {
        return true;
    }
    else if (a.score == b.score)
    {
        return a.id < b.id;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::vector<student> scores;
    std::ios::sync_with_stdio(false);
    int a, b, c, d;

    int num_students;
    int current_student = 0;

    std::cin >> num_students;

    while (std::cin >> a >> b >> c >> d)
    {
        current_student++;
        scores.push_back({current_student, a + b + c + d});
    }

    std::sort(scores.begin(), scores.end(), waytosort);

    for (int i = 0; i < scores.size(); i++)
    {
        //std::cout << scores[i].id << ": " << scores[i].score << std::endl;
        if (scores[i].id == 1)
        {
            std::cout << i + 1;
        }
    }

    return 0;
}