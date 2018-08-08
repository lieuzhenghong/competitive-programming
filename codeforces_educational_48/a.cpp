#include <iostream>
#include <array>

using namespace std;

#define ll long long

int num_days;
ll page_capacity;
ll space_left;
ll names_today;
ll names_left;
ll pages_turned;

int main()
{
    cin >> num_days >> page_capacity;
    space_left = page_capacity;
    while (cin >> names_today)
    {
        pages_turned = 0;
        names_left = names_today;
        //cout << "names: " << names_left << " space left: " << space_left << endl;
        space_left -= names_left;
        //cout << "names: " << names_left << " space left: " << space_left << endl;

        if (space_left <= 0)
        {
            pages_turned = (abs(space_left) / page_capacity) + 1;
            space_left += pages_turned * page_capacity;
            //cout << "pages turned: " << pages_turned << " space left: " << space_left << endl;
        }

        /*
        if (space_left <= names_left)
        {
            // say space_left = 3, names_left = 1000
            // capacity = 17
            pages_turned = ((names_left - space_left) / page_capacity) + 1;
            if (page_capacity < (names_left - space_left))
            {
                space_left = (names_left - space_left) % page_capacity;
            }
            else
            {
                space_left = page_capacity - (names_left - space_left);
            }
            if (space_left == 0)
            {
                space_left = page_capacity;
            }
        }
        else
        {
            space_left -= names_left;
        }
        */

        cout << pages_turned << " ";
    }
    return 0;
}