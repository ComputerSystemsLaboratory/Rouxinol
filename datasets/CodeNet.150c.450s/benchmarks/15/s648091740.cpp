#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    unordered_set<int> S;
    int n, q, ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int s;
        cin >> s;
        S.insert(s);
    }
    cin >> q;
    for(int i=0;i<q;i++){
        int t;
        cin >> t;
        if(S.count(t)>0) ans++;
    }

    cout << ans << endl;
    
    return 0;
}
