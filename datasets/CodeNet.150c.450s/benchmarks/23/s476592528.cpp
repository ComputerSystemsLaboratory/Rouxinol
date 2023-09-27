#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    int first = 1;
    int second = 1;
    
    for (int i = 2; i <= input; ++i) {
        int third = first + second;
        first = second;
        second = third;
    }
    cout << second << "\n";
    
    return 0;
}

