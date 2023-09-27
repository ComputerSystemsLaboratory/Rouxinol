#include <iostream>
using namespace std;

bool is_range(int a, int b, int c)
{
    return a < b && b < c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << (is_range(a, b, c) ? "Yes" : "No")  << endl;

    return 0;
}