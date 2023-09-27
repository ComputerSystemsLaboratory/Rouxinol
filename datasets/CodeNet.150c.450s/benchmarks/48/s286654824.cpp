#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS=1e-10;
const ll INF=1000000000;
int main(){
    int e;
    while(cin>>e,e){
        int ans=INF;
        for(int z=0;z*z*z<=e;z++){
            for(int y=0;y*y<=e;y++){
                int x=e-(z*z*z)-(y*y);
                if(x<0){
                    continue;
                }
                ans=min(x+y+z,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
