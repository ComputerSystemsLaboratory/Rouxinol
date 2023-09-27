#include <bits/stdc++.h>
#define loop(times) for(int i=0;i<(times);i++)

using namespace std;

int main() {
    while(1<2){
    int n,K;
    long long max;
    cin>>n>>K;
    if(n==0&&K==0)break;
    int S[n];
    int a[n];
    S[0]=0;
    loop(n) cin>>a[i];
    loop(K) S[0]+=a[i];
    max=S[0];
        
    for(int j=1;j<n-K+1;j++){
    S[j]=S[j-1]+a[j+K-1]-a[j-1];
    if(max<=S[j])max=S[j];
    }
        
    cout<<max<<endl;
    }
}
