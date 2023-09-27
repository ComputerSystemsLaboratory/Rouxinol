#include <iostream>
using namespace std;

const int m=500000;
int prime[m];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0; i<m; i++) prime[i]=1;
    for(int i=3; i<1000; i+=2) {
        if(!prime[i>>1]) continue;
        for(int j=(i*i)/2; j<m; j+=i) prime[j]=0;
    }
    for(int i=1; i<m; i++) prime[i]+=prime[i-1];
    int n;
    while(cin>>n) {
        if(n<2) cout<<"0\n";
        else cout<<prime[(n-1)/2]<<'\n';
    }
    return 0;
}

