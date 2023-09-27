#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int main(){
    int n,y,m,d;
    cin>>n;
    int mil=(999/3-1/3)*200+(998-999/3+1/3)*195+1;
    while(n--){
        cin>>y>>m>>d;
        --y;
        int cnt=(y/3-1/3)*200+(y-1-y/3+1/3)*195;
        FOR(i,1,m){
            if(i%2==0&&(y+1)%3!=0) cnt+=19;
            else cnt+=20;
        }
        cnt+=d;
        cout<<mil-cnt<<endl;
    }
    return 0;
}
