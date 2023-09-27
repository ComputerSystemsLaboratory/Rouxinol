#include <iostream>
using namespace std;

int main()
{
    int in;
    int first = 0, second, third;

    for (int i = 0; i < 10; i++) {
        cin >> in;

        if (first <= in) {
            third = second;
            second = first;
            first = in;
        } else if (second <= in) {
            third = second;
            second = in;
        } else if (third <= in) {
            third = in;
        }
    }

    cout << first << endl
         << second << endl
         << third << endl;

    return 0;
}