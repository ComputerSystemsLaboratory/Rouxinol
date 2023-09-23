#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
    int e;
    while(cin >> e, e){
        int i,j,k,ans = 1000000;
        for(i = sqrt(1000000); i >= 0; i--){
            if(i * i * i > e) continue;
            for(j = sqrt(1000000 - i * i * i) ; j >= 0; j--){
                if(i * i * i + j * j > e) continue;
                k = e - i * i * i - j * j;
                ans = min(ans, i + j + k);
            }
        }
        cout << ans << endl;
    }
}