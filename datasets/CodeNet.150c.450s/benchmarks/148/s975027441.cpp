#include <bits/stdc++.h>
using namespace std;
void judge(int &ac, int &wa, int &tle, int &re){
    string s;
    cin >> s;
    if (s == "AC"){
        ac += 1;
    }
    else if (s == "WA"){
        wa += 1;
    }
    else if (s == "TLE"){
        tle += 1;
    }
    else if (s == "RE"){
        re += 1;
    }
}

int main(){
    int n, ac, wa, tle, re;
    cin >> n;
    ac = 0;
    wa = 0;
    tle = 0;
    re = 0;
    
    for (int i=0; i<n; i++){
        judge(ac, wa, tle, re);
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}
