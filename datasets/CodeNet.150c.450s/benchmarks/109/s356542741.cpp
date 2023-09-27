#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<long long, long long>;
const long long INF = 1001001001;
const long long MOD = 1000000007;
const double EPS = 1e-10;
struct Edge { int from, to; long long cost; };
using Graph = vector<vector<Edge>>;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    while(cin>>n&&n){
        int ti[24*60*60*2]={};
        for(int i=0;i<n;i++){
            int t=0;
            string s;
            cin>>s;
            t+=(s[0]-'0')*10*60*60;
            t+=(s[1]-'0')*60*60;
            t+=(s[3]-'0')*10*60;
            t+=(s[4]-'0')*60;
            t+=(s[6]-'0')*10;
            t+=(s[7]-'0');
            ti[t]++;
            t=0;
            cin>>s;
            t+=(s[0]-'0')*10*60*60;
            t+=(s[1]-'0')*60*60;
            t+=(s[3]-'0')*10*60;
            t+=(s[4]-'0')*60;
            t+=(s[6]-'0')*10;
            t+=(s[7]-'0');
            ti[t]--;
        }
        int ans=ti[0];
        for(int i=1;i<=24*60*60;i++){
            ti[i]+=ti[i-1];
            ans=max(ans,ti[i]);
        }
        cout<<ans<<endl;
    }
}
