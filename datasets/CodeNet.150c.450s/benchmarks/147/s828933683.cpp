#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ans(n+1,0);

    int nn = sqrt(n);

    for(int x = 1; x <= nn; ++x){
        for(int y = 1; y <= nn; ++y){
            for(int z = 1; z <= nn; ++z){
                int f = x*x+y*y+z*z+x*y+y*z+z*x;
                if(f <= n){
                    ans[f]++;
                }
            }
        }
    }

    for(int i = 1; i <= n; ++i){
        cout << ans[i] << endl;
    }

    return 0;
}