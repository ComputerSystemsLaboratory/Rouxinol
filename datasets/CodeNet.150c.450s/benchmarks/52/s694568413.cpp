#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> entered_cars;
    int number;

    while (cin >> number)
    {
        if(number == 0)
        {
            int& x = entered_cars.back();
            cout << x << endl;
            entered_cars.pop_back(); 
        }
        else
        {
            entered_cars.push_back(number);
        }
    }

    return 0;
}