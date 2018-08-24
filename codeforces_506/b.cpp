#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long;

using namespace std;

int main()
{
    int num_probs;
    int diff;
    vector<int> diffs;
    cin >> num_probs;
    while (cin >> diff)
    {
        diffs.push_back(diff);
    }

    vector<int> best_contest = {};
    vector<int> current_contest = {diffs[0]};

    for (int i = 0; i < num_probs - 1; i++)
    {
        if (diffs[i + 1] - diffs[i] <= diffs[i])
        {
            current_contest.push_back(diffs[i + 1]);
        }
        else
        {
            if (best_contest.size() < current_contest.size())
            {
                best_contest = current_contest;
            }
            current_contest = {diffs[i + 1]};
        }
    }

    if (best_contest.size() < current_contest.size())
    {
        best_contest = current_contest;
    }

    /*
    for (auto &p : best_contest)
    {
        cout << p << " ";
    }
    */

    cout << best_contest.size();
    return 0;
}