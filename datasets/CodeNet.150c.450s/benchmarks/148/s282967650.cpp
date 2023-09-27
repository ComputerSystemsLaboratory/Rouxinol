#include <bits/stdc++.h>
using namespace std;;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    vector<ll> judge(4);
    for (int i = 0; i < 4; i++){
        judge[i] = 0;
    }
    string s;
    for (ll i = 0; i < n; i++){
        cin >> s;
        if (s == "AC"){
            judge[0]++;
        }else if(s == "WA"){
            judge[1]++;
        }else if(s == "TLE"){
            judge[2]++;
        }else{
            judge[3]++;
        }
    }
    cout << "AC" << " x " << judge[0] << endl;
    cout << "WA" << " x " << judge[1] << endl;
    cout << "TLE" << " x " << judge[2] << endl;
    cout << "RE" << " x " << judge[3] << endl;

    
}