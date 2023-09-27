#include <bits/stdc++.h>

using namespace std;

using i64 = long long int;
using ui64 = unsigned long long int;

////////

int main(){
    int n;
    while(cin >> n,n){
        vector<int> a(n);
        for(auto&& x:a)cin >> x;
        sort(a.begin(),a.end());
        int f = 1145141919;
        for(int i=0;i<n-1;i++){
            f = min(a[i+1] - a[i],f);
        }
        cout << f << endl;
    }
}

