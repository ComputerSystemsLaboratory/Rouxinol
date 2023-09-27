#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < n; i++)

int main() {
    while(1){
        string s;
        cin >> s;
        if(s=="-")break;
        int m, sum=0, h;
        cin >> m;
        REP(i,m){
            cin >> h;
            sum += h;
        }
        sum %= int(s.size());
        cout << s.substr(sum, s.size()-sum);
        cout << s.substr(0,sum) << endl;
    }
    return 0;
}
