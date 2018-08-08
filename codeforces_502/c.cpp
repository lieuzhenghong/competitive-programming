// Divide and conquer algorithm.
// Base case when length is 2, don't swap
// Otherwise, partition among the center and SWAP
#include <iostream>
#include <vector>
#include <array>
#include <climits>

using namespace std;
int main()
{
    int num;
    int pivot = INT_MAX;
    vector<std::array<int, 2>> arr;
    cin >> num;

    if (num % 2)
    {
        // we have an odd number of elements
        pivot = (num / 2) + 1;
        //handle special case 3
        if (pivot == 2)
        {
            std::cout << "2 3 1";
            return 0;
        }
        for (int i = 1; i < pivot; i += 2)
        {
            arr.push_back({i, i + 1});
        }
        // special case to handle 3 elements
        for (int j = pivot + 1; j <= num; j += 2)
        {
            arr.push_back({j, j + 1});
        }
    }
    else
    {
        for (int k = 1; k <= num; k += 2)
        {
            arr.push_back({k, k + 1});
        }
    }
    // always swap

    if (pivot == INT_MAX)
    {
        for (int p = arr.size() - 1; p >= 0; p--)
        {
            cout << arr[p][0] << " " << arr[p][1] << " ";
        }
    }
    else
    {
        for (int p = arr.size() - 1; p >= num / 4; p--)
        {

            cout << arr[p][0] << " " << arr[p][1] << " ";
        }

        cout << pivot << " ";

        for (int p = num / 4 - 1; p >= 0; p--)
        {
            cout << arr[p][0] << " " << arr[p][1] << " ";
        }
    }
}