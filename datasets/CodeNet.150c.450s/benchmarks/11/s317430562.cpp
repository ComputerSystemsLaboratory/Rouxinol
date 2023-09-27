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
    vector<vector<int>> result(4, vector<int>(13,0));

    for (int a = 0; a < n; ++a) {
        string s;
        int tmp;
        cin >> s >> tmp;

        if(s == "S") result.at(0).at(tmp - 1) = 1;
        if(s == "H") result.at(1).at(tmp - 1) = 1;
        if(s == "C") result.at(2).at(tmp - 1) = 1;
        if(s == "D") result.at(3).at(tmp - 1) = 1;
    }

    for (int h = 0; h < 4; ++h) {
        for (int k = 0; k < 13; ++k) {
            if(result.at(h).at(k) != 1){
                if(h == 0) cout << "S" << " " << k+1 << endl;
                if(h == 1) cout << "H" << " " << k+1 << endl;
                if(h == 2) cout << "C" << " " << k+1 << endl;
                if(h == 3) cout << "D" << " " << k+1 << endl;
            }
        }
    }

    return 0;
}