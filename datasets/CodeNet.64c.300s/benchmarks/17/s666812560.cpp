#include <iostream>
#include <cmath>
using namespace std;

void solve(int x,int y,int s){
    int ans = -1;
    for(int i=1;i<=s-1;i++){
        for(int j=1;j<=s-1;j++){
            int ii = i*(100+x)/100.0;
            int jj = j*(100+x)/100.0;
            if(ii+jj==s){
                int i3 = i*(100+y)/100;
                int j3 = j*(100+y)/100;
                ans=max(ans,i3+j3);
            }
        }
    }
    cout << ans << endl;
}


int main(){
    int x,y,s;
    while(cin>>x>>y>>s){
        if(x==0 && y==0 && s==0) break;
        solve(x,y,s);
    }
}