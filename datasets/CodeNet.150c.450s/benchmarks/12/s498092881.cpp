#include <bits/stdc++.h>
using namespace std;
int main(){
    int H;
    cin>>H;
    vector<int> A(251);
    for(int i=0;i<H;i++){
        cin>>A[i+1];
    }

    for(int i=1;i<H+1;i++){
        cout<<"node "<<i<<": key = ";
        cout<<A[i];
        cout<<", ";
        int p=i/2,l=i*2,r=i*2+1;
        if(1<=p&&p<=H){
            cout<<"parent key = ";
            cout<<A[p];
            cout<<", ";
        }
        if(1<=l&&l<=H){
            cout<<"left key = ";
            cout<<A[l];
            cout<<", ";
        }
        if(1<=r&&r<=H){
            cout<<"right key = ";
            cout<<A[r];
            cout<<", ";
        }
        cout<<endl;
    }
}
