#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    while(n!=0||k!=0){
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> S(n+1);
    S[0] = 0;
    for(int i=0;i<=n;i++){
        S[i] = S[i-1] + a[i-1];
    }
    int max = 0;
    int tmp = 0;
    for(int i= 0;i<=n-k;i++){
        tmp= S[i+k] - S[i];
        if(max<tmp){
            max = tmp;
        }
    }
    cout<<max<<endl;
    cin>>n>>k;
    }
    return 0;
}
