#include <iostream>

using namespace std;

int main()
{
    int x;
    int cube;

    do {
        cin >> x;
    } while (x < 1 || x > 100);

    cube = x * x * x;

    cout << cube << endl;

    return (0);
}