#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int S, l; 

    do {
        cin >> a >> b;
    } while ((a < 1 || a > 100) || (b < 1 || b > 100));

    S = a * b;
    l = a * 2 + b * 2;

    cout << S << " " << l << endl;
        
    return (0);
}