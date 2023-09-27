#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

int main(void){

    int N; cin >> N;
    map<int, string> cont;
    rep(i, N) cin >> cont[i];

    int ac=0, wa=0, tle=0, re=0;
    rep(i, N){
        if(cont.at(i) == "AC") ac++;
        else if(cont.at(i) == "WA") wa++;
        else if(cont.at(i) == "TLE") tle++;
        else re++;
    }

    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

    return 0;
}