#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int pol(int n){
    return n*(n+1)*(n+2)/6;
}

int main(){
    vector<int> any(1000001),odd(1000001);
    for(int i=1;i<=1000000;i++){
        any[i]=odd[i]=i;
    }
    for(int n=2;pol(n)<=1000000;n++){
        int p = pol(n);
        for(int i=0;i+p<=1000000;i++){
            any[p+i]=min(any[p+i],any[i]+1);
        }
    }
    for(int n=2;pol(n)<=1000000;n++){
        int p = pol(n);
        if(p%2==0) continue;
        for(int i=0;i+p<=1000000;i++){
            odd[p+i]=min(odd[p+i],odd[i]+1);
        }
    }
    int n;
    while(cin>>n,n){
        cout<<any[n]<<' '<<odd[n]<<endl;
    }

    return 0;
}