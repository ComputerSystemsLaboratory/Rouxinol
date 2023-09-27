#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    string main, str, sidestr;
    int n, i, j;
    cin >> main >> n;
    for (int p = 0; p < n; p++)  {
        cin >> str;
        if (str == "replace") {
            cin >> i >> j >> sidestr;
            main.replace(i, j + 1 - i, sidestr);
        } else if (str == "reverse") {
            cin >> i >> j;
            string pickles = main.substr(i, j + 1  - i);
            reverse(pickles.begin(), pickles.end());
            main.replace(i, j + 1 - i, pickles);
        } else {
            cin >> i >> j;
            cout << main.substr(i, (j + 1 - i)) << endl;
        }
        }
    }
