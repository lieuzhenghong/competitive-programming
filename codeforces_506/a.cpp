#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long;

using namespace std;

int main()
{
    int str_len;
    int num_subs;
    string s;
    cin >> str_len >> num_subs;
    cin >> s;

    int overlap = 0;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s.substr(0, i) == s.substr(s.length() - i, i))
        {
            //cout << s.substr(0, i) << " " << s.substr(s.length() - i, i);
            overlap++;
        }
        else
        {
            break;
        }
    }

    //cout << overlap << endl;

    if (overlap == s.length())
    {
        overlap--;
    }

    string output = "";

    for (int j = 0; j < num_subs; j++)
    {
        output += s;
        if (num_subs != 1 && j < num_subs - 1)
        {
            for (int k = 0; k < overlap; k++)
            {
                output.pop_back();
            }
        }
    }

    cout << output;

    return 0;
}