#include <iostream>
using namespace std;

int digit(int x)
{
    int i = 0;
    int j = 1;
    while (j <= x) {
        j *= 10;
        i++;
    }
    return i;
}
int main()
{
    int m[2];
    int output;
    while (cin >> m[0] >> m[1]) {
            output = digit(m[0] + m[1]);
            cout << output << endl;
    }
}