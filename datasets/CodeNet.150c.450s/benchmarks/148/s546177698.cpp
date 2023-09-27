#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;

int main(){
    ll t;
    cin >> t;
    ll a = 0, b = 0, c = 0, d = 0;
    while(t--){
        string s;
        cin >> s;
        
        if(s == "AC"){
            a += 1;
        }
        
        if(s == "WA"){
            b += 1;
        }
        
        if(s == "TLE"){
            c += 1;
        }
        
        if(s == "RE"){
            d += 1;
        }
    }
    
    cout << "AC x " << a << endl;
    cout << "WA x " << b << endl;
    cout << "TLE x " << c << endl;
    cout << "RE x " << d << endl;
    return 0;
}