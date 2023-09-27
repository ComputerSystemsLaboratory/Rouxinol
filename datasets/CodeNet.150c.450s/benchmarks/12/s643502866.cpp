#include<iostream>
using namespace std;
int n,k,A[251];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=1;i<=n;i++){
        cout<<"node "<<i<<": "<<"key = "<<A[i]<<", ";
        if(i!=1) cout<<"parent key = "<<A[i/2]<<", ";
        if(i*2<=n) cout<<"left key = "<<A[i*2]<<", ";
        if(i*2+1<=n) cout<<"right key = "<<A[i*2+1]<<", ";
        cout<<endl;
    }
    return 0;
}
