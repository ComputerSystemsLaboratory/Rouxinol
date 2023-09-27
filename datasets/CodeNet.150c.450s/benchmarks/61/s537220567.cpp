#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main(void){
    int n,a,b,c,x;
    while(cin>>n>>a>>b>>c>>x,n){
        deque<int> r(n);
        rep(i,n) cin>>r[i];
        rep(i,10001){
            if(x==r[0]) r.pop_front();
            if(r.size()==0){
                cout<<i<<endl;
                break;
            }
            x=(a*x+b)%c;
        }
        if(r.size()!=0) cout<<-1<<endl;
    }
}