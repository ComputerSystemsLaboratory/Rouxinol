#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(x) for(auto it=(x).begin();it!=(x).end();it++) 
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
 
using namespace std;

int chan(char c){
    if(c=='m')return 1000;
    if(c=='c')return 100;
    if(c=='x')return 10;
    if(c=='i')return 1;
}
 
int main(){
    int n;
    cin>>n;
    rep(p,0,n){
        int num[2]={0};
        rep(j,0,2){
            string s;
            cin>>s;
            rep(i,0,s.length()){
                if('0'<=s[i] && s[i]<='9'){
                    num[j]+=(s[i]-'0')*chan(s[i+1]);
                    i++;
                }else {
                    num[j]+=chan(s[i]);
                }
            }
        }
        
        int ans=num[0]+num[1];
        if(ans/1000==1)cout<<'m';
        else if(ans/1000!=0)cout<<ans/1000<<'m';
        ans%=1000;
        
        if(ans/100==1)cout<<'c';
        else if(ans/100!=0)cout<<ans/100<<'c';
        ans%=100;
        
        if(ans/10==1)cout<<'x';
        else if(ans/10!=0)cout<<ans/10<<'x';
        ans%=10;
        if(ans==1)cout<<'i';
        else if(ans!=0)cout<<ans<<'i';
        cout<<endl;
        
    }
    return 0;
}
