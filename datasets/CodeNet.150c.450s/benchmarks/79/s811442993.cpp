#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define ll long long

using namespace std;

signed main(){
    while(true){
        int n, r; cin >> n >> r;
        if(n == 0)break;
        vector<int> l(n+1);
        for(int i = 1; i <= n; i++){
            l[i] = i;
        }
        for(int i = 0; i < r; i++){
            int p,c; cin >> p >> c;
            int b = n-p-c+2;
            for(int j = 0; j < c; j++){
                l.push_back(l[b]);
                l.erase(l.begin() + b);
            }
        }
        cout << l.back() << endl;
    }

    return 0;
}


