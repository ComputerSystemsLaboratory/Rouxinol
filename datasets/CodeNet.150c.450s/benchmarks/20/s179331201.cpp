#include <iostream>
using namespace std;

int main()
{
    int S;
    cin >> S;
    int h = S / 3600;
    S = S - h * 3600;
    int m = S / 60;
    S = S - m*60;
    cout << h << ':' << m << ':' << S << endl;
    return 0;
}
