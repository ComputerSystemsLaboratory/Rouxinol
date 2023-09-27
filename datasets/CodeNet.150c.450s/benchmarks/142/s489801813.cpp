#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j,l;
    cin>>n>>k;
    unsigned long long int a[n],b[n];
    unsigned long long int o=1;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=k;i<n;i++){
        if(a[i]>a[i-k]){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
