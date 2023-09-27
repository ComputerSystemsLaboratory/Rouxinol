#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,a,b,c,x;
    while(cin >> n >> a >> b >> c >> x, n){
        vector<int> y(n);
        for(int i = 0; i < n; i++)cin >> y[i];
        int ans = 0;
        int ind = 0;
        while(ans <= 10000){
            //cout << ind << " " << x << " " << ans << endl;
            if(x == y[ind]){
                ind++;
                if(ind == n)break;
            }
            ans++;
            x = (x * a + b) % c;
        }
        if(ans > 10000){
            cout << -1 << endl;
        }else{
            cout << ans << endl;
        }
    }
}

