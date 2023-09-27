#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x,n;
    cin>>x>>n;
    int num[x];

    for(int i=0;i<x;i++){
        num[i]=i+1;
    }

    for(int i=0;i<n;i++){
        int a,b;
        char c;
        cin>>a>>c>>b;
        swap(num[a-1],num[b-1]);
    }

    for(int i=0;i<x;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}