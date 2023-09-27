#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int INF = 1e9;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "AC") mp["AC"]++;
        if (s == "WA") mp["WA"]++;
        if (s == "TLE") mp["TLE"]++;
        if (s == "RE") mp["RE"]++;
    }
    cout << "AC x " << mp["AC"] << endl;
    cout << "WA x " << mp["WA"] << endl;
    cout << "TLE x " << mp["TLE"] << endl;
    cout << "RE x " << mp["RE"] << endl;
}