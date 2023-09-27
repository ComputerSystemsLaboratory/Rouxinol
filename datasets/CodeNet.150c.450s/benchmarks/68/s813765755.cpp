#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)
typedef long long ll;

int main(){
    while(true){
        int n;
        long ans = 100000000000;
        cin >> n;
        if(n == 0)return 0;
        vector<int > a(n);
        rep(i,n)cin >> a[i];

        rep(i,n){
            for(int j = i+1;j<n;j++){
                int temp = abs(a[i]-a[j]);
                if(ans > temp)ans = temp;
            }
        }
        cout << ans << endl;
    }
}
