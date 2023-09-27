#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main(void){
    int x,y,s;
    while(cin>>x>>y>>s,x){
        vi bef(2000,0);
        rep(i,1000){
            bef[floor(i*(100+x)/100)]=i;
        }
        int m=-1;
        for(int i=1;i<=s/2;i++){
            double a=i,b=s-i;
            if(bef[a]!=0 &&bef[b]!=0){
                m=max(m,(int)(floor(bef[a]*(100+y)/100)+floor(bef[b]*(100+y)/100)));
            }
        }
        cout<<m<<endl;
    }
}