#include <bits/stdc++.h>
using namespace std;

int n,a[2000001],freq[100100];

void countingsort(int a[]){
    for(int i=1;i<=n;i++){
        freq[a[i]]++;
    }
    int idx=0;
    for(int i=0;i<=10000;i++){
        for(int j=1;j<=freq[i];j++){
            idx++;
            a[idx]=i;
        }
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    countingsort(a);
    for(int i=1;i<=n;i++){
        cout<<a[i];
        if(i==n){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }
}
