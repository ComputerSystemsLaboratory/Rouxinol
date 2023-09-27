#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999


//??????
ll factmemo[25]={1};
ll fact(int n){
    if(factmemo[n]!=0)return factmemo[n];
    return factmemo[n] = n*fact(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
}