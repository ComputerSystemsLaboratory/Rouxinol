#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int n; cin >> n;
    string s;
    int C0=0,C1=0,C2=0,C3=0;
    rep(i,n){
        cin >> s;
        if(s=="AC") C0++;
        if(s=="WA") C1++;
        if(s=="TLE") C2++;
        if(s=="RE") C3++;
    }
    cout << "AC x " << C0 << endl;
    cout << "WA x " << C1 << endl;
    cout << "TLE x " << C2 << endl;
    cout << "RE x " << C3 << endl;
}