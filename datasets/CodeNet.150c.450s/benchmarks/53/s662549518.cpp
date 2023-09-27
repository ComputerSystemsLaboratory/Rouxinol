#include<bits/stdc++.h>

#define rep(i,N) for(int i=0;i<N;i++)
#define rep2(i,N) for(int i=1;i<=N;i++)
using namespace std;
long long  INF=1e18;
long long mod=1e9+7;
vector<long long> v;

void prime_fac(long long n){
    long long K=n;
    for(long long i=2;i<=sqrt(K);i++){
        while(n%i==0){
            n/=i;
            v.emplace_back(i);
        }
    }
    if(n!=1)v.emplace_back(n);


    return;
}

//status unsolved
int main(){

    long long n;
    cin>>n;

    printf("%d:",n);

    prime_fac(n);

    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<endl;
    return 0;

}
/*


*/

