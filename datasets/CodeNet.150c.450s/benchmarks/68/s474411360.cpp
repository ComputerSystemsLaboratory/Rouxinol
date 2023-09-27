#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[1050];
    while(cin>>n,n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int mn=1000000;
        for(int i=1;i<n;i++){
            mn=min(mn,a[i]-a[i-1]);
        }
        cout<<mn<<endl;
    }
    return 0;
}

