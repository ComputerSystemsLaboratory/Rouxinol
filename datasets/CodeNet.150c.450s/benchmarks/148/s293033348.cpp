#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    
    int ac = 0, wa = 0, tle = 0, re = 0;
    for(string a: vec){
        if(a == "AC"){
            ac++;
        }else if(a == "WA"){
            wa++;
        }else if(a == "TLE"){
            tle++;
        }else if(a == "RE"){
            re++;
        }
    }
    
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}