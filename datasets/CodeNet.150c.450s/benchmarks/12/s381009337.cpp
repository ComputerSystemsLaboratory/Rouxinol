#include <bits/stdc++.h>
using namespace std;

#define inf 1e9+7
typedef long long ll;

void solve(int n,const vector<ll> &a){
    for(int i=0;i<n;i++){
        int sub=i+1;
        cout << "node " << sub << ":";
        cout << " key = " << a[i] << ",";
        if(i)cout << " parent key = " << a[sub/2-1] << ",";
        if(sub*2-1 < n)cout << " left key = " << a[sub*2-1] << ",";
        if(sub*2 < n)cout << " right key = " << a[sub*2] << ",";
        cout << " \n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n,inf);
    for(int i=0;i<n;i++)cin >> a[i];
    solve(n, a);
    return 0;
}

