#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1e9+7;

int main(){
    int d;
    cin >> d;
    vector<int> c(26);
    int s[d][26];
    for(int i = 0; i < 26; i++) cin >> c[i];
    for(int i = 0; i < d; i++){
        for(int j = 0; j < 26; j++) cin >> s[i][j];
    }
    vector<int> t(d);
    for(int i = 0; i < d; i++){
        int a;
        cin >> a;
        a--;
        t[i] = a;
    }
    long long ans = 0;
    map<int,int> last;
    for(int i = 0; i < d; i++){
        ans += s[i][t[i]];
        last[t[i]] = i+1;
        for(int j = 0; j < 26; j++){
            ans -= c[j]*(i+1-last[j]);
        }
        cout << ans << endl;
    }
    return 0;
}