#include <iostream>
#include <array>
#include <string>

using namespace std;

#define ll long long

string full_string;
string substring;
int full_length;
int sub_length;
int queries;

int s_start;
int s_end;

array<int, 10000> occs = {0};
array<int, 10000> total_matches = {0};

int main()
{
    cin >> full_length >> sub_length >> queries;

    cin >> full_string;
    cin >> substring;

    int curr_matches = 0;
    for (int i = 1; i < full_length + 1; i++)
    {
        if (full_string.substr(i - 1, sub_length) == substring)
        {
            occs[i] = 1;
        }
        //cout << "i " << i << " " << occs[i] << endl;
    }

    int curr = 0;
    while (cin >> s_start >> s_end)
    {
        int tm = 0;
        //cout << s_start << ":" << occs[s_start] << " " << s_end << ":" << occs[s_end] << endl;
        if (s_end - s_start < (sub_length - 1))
        {
        }
        else
        {
            for (int i = s_start; i <= s_end; i++)
            {
                if (occs[i] == 1)
                {
                    tm++;
                }
            }
        }
        total_matches[curr] = tm;
        curr++;
        //cout << tm << endl;
    }

    for (int j = 0; j < queries - 1; j++)
    {
        cout << total_matches[j] << endl;
    }
    cout << total_matches[queries - 1];
    return 0;
}
