#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vin=vector<int>;
using vll=vector<long long>;
using vvin=vector<vector<int>>;
using vvll=vector<vector<long long>>;
using vstr=vector<string>;
using vvstr=vector<vector<string>>;
using vch=vector<char>;
using vvch=vector<vector<char>>;
using vbo=vector<bool>;
using vvbo=vector<vector<bool>>;
using vpii=vector<pair<int,int>>;
using pqsin=priority_queue<int,vector<int>,greater<int>>;
#define mp make_pair
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep2(i,s,n) for(int i=(s);i<(int)(n);i++)
#define all(v) v.begin(),v.end()
#define decp(n) cout<<fixed<<setprecision((int)n)
const ll inf=1e9+7;
const ll INF=1e18;

int main(){
    string s;cin>>s;
    int n=s.size();
    stack<int> l;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    rep(i,n){
        if(s[i]=='\\')l.push(i);
        else if(s[i]=='/'){
            if(l.size()){
                pq.push(mp(l.top(),i));
                l.pop();
            }
        }
    }
    vin ans;int total=0;int sum,tmp;int j=0;
    while(pq.size()){
        sum=0;tmp=pq.top().second;
        while(pq.size()&&pq.top().first<tmp){
            sum+=pq.top().second-pq.top().first;
            pq.pop();
        }
        ans.push_back(sum);
        total+=sum;
    }
    int k=ans.size();
    cout<<total<<endl;
    if(k==0)cout<<k<<endl;
    else{
        cout<<k<<" ";
        rep(i,k-1)cout<<ans[i]<<" ";
        cout<<ans[k-1]<<endl;
    }
}
