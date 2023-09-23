#include <iostream>
using namespace std;

int main()
{
    int x, y;

    for (cin >> x >> y; x | y; cin >> x >> y){
        if (x < y) cout << x << " " << y << endl;
        else cout << y << " " << x << endl;
    }

    return 0;
}