#include <iostream>
using namespace std;
int n,w,a,b,d[10001];
int main(void){
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        for(int j=w;j>=b;j--)d[j]=max(d[j],d[j-b]+a);
    }
    cout<<d[w]<<endl;
}

