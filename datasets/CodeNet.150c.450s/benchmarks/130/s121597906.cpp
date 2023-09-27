#include <iostream>
#include <stdio.h>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
    long long n,m,cnt=0;
    cin>>n>>m;
    long long a[n][m],b[m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;++i){
        cin>>b[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cnt+=a[i][j]*b[j];
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}

