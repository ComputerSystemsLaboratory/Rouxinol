#include "bits/stdc++.h"
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)

int isPrime[1000000];


void era(){
    for(int i=2;i<1000000;i++){
        if( isPrime[i]==1 ){
            int k = 2;
            while(k*i<1000000){
                isPrime[k*i]=0;
                k++;
            }
        }
    }
}


int main(){
    for(int i=0;i<1000000;i++){
        isPrime[i]=1;
    }
    isPrime[0]=isPrime[1]=0;
    
    era();
    
    int n;
    while(cin>>n){
        int count=0;
        for(int i=0;i<=n;i++){
            if( isPrime[i] )count++;
        }
        cout<<count<<endl;
    }
    
    
    
}