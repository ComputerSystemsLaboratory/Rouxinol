#include <bits/stdc++.h>
using namespace std;

int gcd_func(int a, int b){
    return b? gcd_func(b, a%b) : a;
} 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n; cin >> n;
    int ac = 0, wa = 0, tle = 0, re = 0;
    while(n--){
        string ipt; cin >> ipt;
        if(ipt.compare("AC") == 0){
            ac++;
        }
        else if(ipt.compare("WA") == 0){
            wa++;
        }
        else if(ipt.compare("TLE") == 0){
            tle++;
        }
        else if(ipt.compare("RE") == 0){
            re++;
        }
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}