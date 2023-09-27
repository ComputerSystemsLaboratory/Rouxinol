#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; ++i){cin >> a[i];}
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == "AC"){++ac;}
        if(a[i] == "WA"){++wa;}
        if(a[i] == "TLE"){++tle;}
        if(a[i] == "RE"){++re;}
    }
    
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    
    return 0;
}
