#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
#define ll long

using namespace std;

auto stringify(array<ll, 2> c)
{
    ll num = stoll(to_string(c[0]) + to_string(c[1]));
    return num;
}

auto n_pick_2(vector<ll> n, ll k)
{
    //vector<ll> combis;
    int combis = 0;
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = i; j < n.size(); j++)
        {
            if (i != j)
            {
                //cout << n[i] << n[j] << endl;
                if (!(stringify({n[i], n[j]}) % k))
                {
                    combis++;
                }
                if (!(stringify({n[j], n[i]}) % k))
                {
                    combis++;
                }
            }
        }
    }
    return combis;
}

int main()
{
    int n;
    ll k;
    vector<ll> nums;
    ll num;

    cin >> n >> k;
    while (cin >> num)
    {
        nums.push_back(num);
    }

    int combis = n_pick_2(nums, k);
    cout << combis;

    return 0;
}

