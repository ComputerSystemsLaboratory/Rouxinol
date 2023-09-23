#include <iostream>
using namespace std;

long long fibodp(int n){
    long long fibodp[200]={0};
    fibodp[0]=1;
    fibodp[1]=1;
    for(int i=2; i<=n; i++){
        fibodp[i]=fibodp[i-1]+fibodp[i-2];
    }
    return fibodp[n];
}

int main(void){
    int n;
    cin>>n;
    cout<<fibodp(n)<<endl;
    return 0;
}

