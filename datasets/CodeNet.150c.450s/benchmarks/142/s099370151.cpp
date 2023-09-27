#include<bits/stdc++.h>
using namespace std;

#define MAXN 5000005
#define ll long long int

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    for(int i=k;i<n;i++){
        if(a[i]>a[i-k]){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
