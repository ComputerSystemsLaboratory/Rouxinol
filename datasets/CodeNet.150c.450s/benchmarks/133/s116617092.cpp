#include<bits/stdc++.h>
using namespace std;
using lli = long long;
const int m = 26;
int d;
vector<int> c;
vector<int> last;
vector<vector<int>> s;
vector<int> t;

int main(void){
    cin >> d;
    c = vector<int>(m+1);
    last = vector<int>(m+1, 0);
    s = vector<vector<int>>(d+1, vector<int>(m+1));
    t = vector<int>(d+1);
    for(int i = 1; i <= m; i++){
        cin >> c[i];
    }
    for(int i = 1; i <= d; i++){
        for(int j = 1; j <= m; j++){
            cin >> s[i][j];
        }
    }
    for(int i = 1; i <= d; i++){
        cin >> t[i];
    }
    lli res = 0;
    for(int i = 1; i <= d; i++){
        res += s[i][t[i]];
        last[t[i]] = i;
        for(int j = 1; j <= m; j++){
            res -= c[j]*(i-last[j]);
        }
        cout << res << endl;
    }

    return 0;
}
