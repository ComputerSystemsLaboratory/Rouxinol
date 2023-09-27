#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238462
typedef long long ll;
typedef double db;
int p[6000006];
int main(){
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                p[i*i+j*j+k*k+i*j+i*k+k*j]++;
            }
        }
    }
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cout<<p[i]<<endl;
    }
}