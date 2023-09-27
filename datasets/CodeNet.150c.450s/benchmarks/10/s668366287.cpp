#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<vector<int>>> k(4,vector<vector<int>>(3,vector<int>(10,0)));

    int a,b,c,d;
    for (int h = 0; h < n; ++h) {
        cin >> a >> b >> c >> d;
        k.at(a - 1).at(b - 1).at(c - 1) += d;
    }

    for (int e = 0; e < 4; ++e) {
        for (int f = 0; f < 3; ++f) {
            for (int g = 0; g < 10; ++g) {
                cout << " " << k.at(e).at(f).at(g);
            }
            cout << endl;
        }
        if(e != 3)
            cout << "####################" << endl;
   }

    return 0;
}