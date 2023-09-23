#include <iostream>
#include <algorithm>
using namespace std;

int cal(int p, int x){
    return p*(100+x)/100;
}

int main() {
    int x,y,s;
    while(cin>>x>>y>>s, x&&y&&s){
        int ans=0;
        for(int i = 1; i <= s;i++){
            for(int j = 1; j <= s;j++){
                if(cal(i,x) + cal(j,x) == s) ans = max(cal(i,y)+cal(j,y), ans);
            }
        }
        cout << ans << endl;
    }
    return 0;
}