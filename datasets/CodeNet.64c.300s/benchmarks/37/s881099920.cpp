#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
int main(void){
    int n;
    while(cin>>n,n){
        int l=0,r=0,t=0,ans=0;
        while(l<=n){
            if(n==t) ans++;
            if(n>=t){
                t+=++r;
            }else{
                t-=l++;
            }
        }
        cout<<ans-1<<endl;
    }
}