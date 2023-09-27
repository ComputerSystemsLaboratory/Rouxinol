#include<iostream>
using namespace std;

int main(){
    int n,i,*H;
    cin>>n;
    H =new int[n];
    for(i=0;i<n;i++){
        cin>>H[i];
    }
    for(int j=1;j<n+1;j++){
        cout<<"node "<<j<<":"<<" key = "<<H[j-1]<<", ";
        if(j!=1) cout<<"parent key = "<<H[j/2-1]<<", ";
        if(2*j-1<n) cout<<"left key = "<<H[2*j-1]<<", ";
        if(2*j<n) cout<<"right key = "<<H[2*j]<<", ";
        cout<<endl;
    }
}
