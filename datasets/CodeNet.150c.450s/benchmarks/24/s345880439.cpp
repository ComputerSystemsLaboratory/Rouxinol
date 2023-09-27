#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<functional>
#include<math.h>
using namespace std;
#define N (1000000000+7)
#define INF 1e16
typedef long long ll;
typedef pair<ll,ll> P;

ll n,m;
bool f(){
    return (n==0)&&(m==0);
}

bool cmp(const pair<ll,ll> &a,const pair<ll,ll> &b) {
	if(a.second!=b.second)return a.second>b.second;
	else return a.first>b.first;
}

int main(void){
    while(true){
        cin>>n>>m;
        if(f())break;
        vector<P>p(n);
        for(ll i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }
        ll ans = 0;
        sort(p.begin(),p.end(),cmp);
        for(ll i=0;i<n;i++){
            if(m>=p[i].first){
                m-=p[i].first;
            }
            else{
                if(m==0){
                    ans+=p[i].first*p[i].second;
                }
                else{
                    ans+=(p[i].first-m)*p[i].second;
                    m=0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

