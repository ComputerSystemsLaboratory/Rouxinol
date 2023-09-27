#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int>f;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                f[i*i+j*j+k*k+i*j+j*k+k*i]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << f[i]<<endl;
    }
}