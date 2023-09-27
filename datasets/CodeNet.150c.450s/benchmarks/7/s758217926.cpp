#include <iostream>

using namespace std;

int main()
{
    int first = 0;
    int second = 0;
    int third = 0;
    
    for (int i = 0; i < 10; ++i) {
        int number;
        cin >> number;
        if (number <= third) continue;
        third = number;
        if (third <= second) continue;
        swap(second, third);
        if (second <= first) continue;
        swap(first, second);
    }
    cout << first << endl
         << second << endl
         << third << endl;
    return 0;
}