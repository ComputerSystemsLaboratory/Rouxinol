#include <iostream>
using namespace std;
int main(){
    int v[100];
    v[0]=v[1]=1;
    for(int i=2;i<=44;i++){
        v[i]=v[i-1]+v[i-2];
    }
    int n;
    cin>>n;
    cout<<v[n]<<endl;
}