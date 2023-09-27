// https://atcoder.jp/contests/abc175/tasks/abc175_c
#include <iostream>
#include <vector>
#include <deque>
#include <tuple>
#include <algorithm>
#include <iterator> // std::back_inserter
#include <climits>
#include <sstream>

using namespace std;

typedef unsigned long ll;

ll n;

int main()
{
    ll AC=0, WA=0, TLE=0, RE=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (s == "AC") {
            AC++;
        }
        else if (s == "WA") {
            WA++;
        }
            else if (s == "TLE") {
            TLE++;
        }
        else if (s == "RE") {
            RE++;
        }
    }
    cout << "AC x " << AC << endl << "WA x " << WA << endl << "TLE x " << TLE << endl << "RE x " << RE <<endl;
}
