#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}
//-----------------------------------------------------------------------

const int N=1e6;
bool isPrime[N+5];

int main()
{   
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    for(int i=2;i<=N;i++) isPrime[i]=true;
    for(int i=2;i<=N;i++){
        if(!isPrime[i]) continue;
        for(int j=i*2;j<=N;j+=i){
            isPrime[j]=false;
        }
    }

    int a,d,n;
    while(cin>>a>>d>>n,a|d|n)
    {
        while(true){
            if(isPrime[a]) n--;
            if(n==0){
                cout<<a<<endl;
                break;
            }
            a+=d;
        }
    }
    
}