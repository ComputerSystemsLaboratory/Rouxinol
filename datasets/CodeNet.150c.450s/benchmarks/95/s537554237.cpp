#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main(void){
    int n;
    while(cin>>n,n){
        int next=3,now=0,ans=0;
        string s;
        msi p={{"lu",1},{"ld",-1},{"ru",2},{"rd",-2}};
        rep(i,n){
            cin>>s;
            now+=p[s];
            if(now==next){
                ans++;
                next^=3;
            }
        }
        cout<<ans<<endl;
    }
}