#include<bits/stdc++.h>
using namespace std;

int N;
string S;

int main(){
    cin >> N;
    int ac = 0, tle = 0, re = 0, wa = 0;
    for(int i = 0; i < N; ++i){
        cin >> S;
        if(S == "AC") ++ac;
        else if(S == "WA") ++wa;
        else if(S == "RE") ++re;
        else ++tle;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}