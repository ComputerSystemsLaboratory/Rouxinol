#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int MIN = 1e9;
        rep(i, 0, n - 1){
            MIN = min(MIN, a[i + 1] - a[i]);
        }
        cout << MIN << endl;
    }
}