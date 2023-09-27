#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll equa;
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i]=0;
    }
    for(int i=1;i*i<=n;i++){
        for(int j=1;j*j<=n;j++){
            for(int z=1;z*z<=n;z++){
              equa = i*i + j*j + z*z + i*j + i*z + j*z;
              if(equa>0 && equa<=n){
                  arr[equa]++;
              }
              else if(equa>n){
                  break;
              }   
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}