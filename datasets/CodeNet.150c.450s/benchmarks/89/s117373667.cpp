#include <bits/stdc++.h>

using namespace std;

int INF=1e9;

vector<int> prime;
bool is_prime[1000010];

void sieve(int n){
    for(int i=0;i<=n;i++)is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j=2*i;j<=n;j+=i)is_prime[j]=false;
        }
    }
    return;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    sieve(1000000);

    while(1){
        int a,d,n;
        cin>>a>>d>>n;

        if(a==0)break;

        int pos=0;

        for(int i=0;i<prime.size();i++){
            if((prime[i]-a)%d==0&&prime[i]>=a)pos++;

            if(pos==n){
                cout<<prime[i]<<endl;
                break;
            }
        }
    }

}
