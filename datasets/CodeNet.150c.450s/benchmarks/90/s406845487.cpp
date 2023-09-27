#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int c[101]={};
    int n, max=0;
    while(cin>>n){
        ++c[n];
        if(max<c[n]) max=c[n];
    }
    for(int i=1; i<=100; i++){
        if(c[i]==max) cout<<i<<'\n';
    }
    return 0;
}