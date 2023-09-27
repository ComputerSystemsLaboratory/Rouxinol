
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,j=0;
    cin>>n;
    float x[4],y[4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++)cin>>x[j]>>y[j];
        if( ( (y[1]-y[0]) * (x[3]-x[2]) )==( (y[3]-y[2])*(x[1]-x[0]) ) ){
           cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    
}
