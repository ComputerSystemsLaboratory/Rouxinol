#include<bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(),(x).end()

using ll = long long;
using P = pair<int,int>;
using mp =  map<string,int>;

const int MOD = 1e9 + 7;
const int INF = 1001001001;


int main(void){


    int n;
    cin >> n;

    mp m;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        m[s] += 1;
    }

    cout << "AC x " << m["AC"] << "\n";
    cout << "WA x " << m["WA"] << "\n";
    cout << "TLE x " << m["TLE"] << "\n";
    cout << "RE x " << m["RE"] << "\n";

    return 0;
}