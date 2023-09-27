#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int main(){
    int x,y,s;
    while(cin>>x>>y>>s,x|y|s){
        int mx=0;
        FOR(i,1,1001)FOR(j,1,1001){
            if(i*(100+x)/100+j*(100+x)/100==s){
                mx=max(mx,i*(100+y)/100+j*(100+y)/100);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
