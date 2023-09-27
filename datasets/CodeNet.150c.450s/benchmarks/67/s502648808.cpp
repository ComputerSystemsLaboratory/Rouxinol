#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a),end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int n;
    while( scanf("%d", &n), n ){
        int ans = 0, sum = 1, start = 1, end = 2;
        while(start <= n / 2){
            if(sum >= n){
                if(sum == n) ans++;
                sum-=start;
                start++;
            }else if(sum < n){
                sum+= end;
                end++;
            }
        }
        printf("%d\n", ans);
    }
}