#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
int main(void){
    int n;
    while(cin>>n,n){
        valarray<int> field(0,441);
        int cur=220;
        rep(i,n){
            int x,y; cin>>x>>y;
            field[x+(20-y)*21]=1;
        }
        int m; cin>>m;
        rep(i,m){
            char c; int d;
            cin>>c>>d;
            vi vl={-21,1,-1,21};
            rep(j,d){
                cur+=vl[((string)"NEWS").find(c)];
                field[cur]=0;
            }
        }
        cout<<(field.sum()==0?"Yes":"No")<<endl;
    }
}