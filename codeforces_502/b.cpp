#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#define ll long long

using namespace std;

ll zero_columns = 0;
ll one_columns = 0;
ll num_ones = 0;
ll num_zeroes = 0;

int num_chars;

array<int, 100000> a;
array<int, 100000> b;

string a_str;
string b_str;

int main()
{
    std::cin >> num_chars;
    std::cin >> a_str;
    std::cin >> b_str;

    for (int i = 0; i < num_chars; i++)
    {
        a[i] = a_str.at(i);
        b[i] = b_str.at(i);
        if (a[i] == '0')
        {
            num_zeroes++;
        }
        else
        {
            num_ones++;
        }
        if (b[i] == '0')
        {
            if (a[i] == '0')
            {
                zero_columns++;
                num_zeroes--;
            }
            else
            {
                one_columns++;
                num_ones--;
            }
        }
    }

    //cout << "num 0s: " << num_zeroes << std::endl;
    //cout << "num 1s: " << num_ones << std::endl;
    //cout << "zero_col " << zero_columns << std::endl;
    //cout << "one_col " << one_columns << std::endl;

    long long int swaps = (num_zeroes * one_columns) +
                          (num_ones * zero_columns) +
                          (one_columns * zero_columns);

    cout << swaps;

    return 0;
}