#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

vector<pair<ll,int> >res;

vector<pair<ll,int> > factorize(ll n){
        for(ll i=2;i*i<=n;i++){
                if(n%i)continue;
                res.emplace_back(i,0);
                while(n%i==0){
                        n/=i;
                        res.back().second++;
                }
        }
        if(n!=1)res.emplace_back(n,1);
        return res;
}

int main(){
        ll n;
        cin>>n;
        factorize(n);
        cout<<n<<":";
        for(int i=0;i<res.size();i++){
                for(int j=0;j<res[i].second;j++){
                        cout<<" "<<res[i].first;
                }
        }
        cout<<endl;
        return 0;
}


