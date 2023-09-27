#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[51];
int main(){
    int n,p;
    while(cin>>n>>p,n|p){
        memset(a,0,sizeof(a));
        int cur=p;
        int t=0;
        while(1){
            if(cur>0){
                ++a[t],--cur;
                if(a[t]==p){
                    break;
                }
            }
            else{
                cur=a[t],a[t]=0;
            }
            t=(t+1)%n;
        }
        cout<<t<<endl;
    }
    return 0;
}
