#include <iostream>
using namespace std;
int main(){
    
    int n,x,a[4][13]={0};
    char ch;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch>>x;
        if(ch=='S'){a[0][x-1]=1;}
        if(ch=='H'){a[1][x-1]=1;}
        if(ch=='C'){a[2][x-1]=1;}
        if(ch=='D'){a[3][x-1]=1;}
    }
    for(int k=0;k<4;k++){
        for(int j=0;j<13;j++){
            if(a[k][j]!=1&&k==0){cout<<"S "<<j+1<<endl;}
            if(a[k][j]!=1&&k==1){cout<<"H "<<j+1<<endl;}
            if(a[k][j]!=1&&k==2){cout<<"C "<<j+1<<endl;}
            if(a[k][j]!=1&&k==3){cout<<"D "<<j+1<<endl;}
        }
        
    }
    return 0;
}

