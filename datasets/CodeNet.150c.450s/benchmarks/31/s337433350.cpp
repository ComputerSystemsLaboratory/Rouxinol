#include <iostream>
using namespace std;


int main()
{
    int n = 0;
    cin >> n;
    int r_min = 2e9;
    int dif = -2e9;
    for (int i = 0; i != n; ++i){
        int r = 0;
        cin >> r;
        if (r - r_min > dif) dif = r - r_min;
        if (r < r_min) r_min = r;
    }
    cout << dif << endl;
    return 0;
}