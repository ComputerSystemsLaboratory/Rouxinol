#include <iostream>
using namespace std;
int main(void){
    int n, S[13], H[13], C[13], D[13];
    cin>>n;
    for(int i=0;i<13;i++){
        S[i]=1;
        H[i]=1;
        C[i]=1;
        D[i]=1;
    }
    string x;
    int y;
    for(int i=0;i<=n;i++){
        cin>> x >> y;
        if(x=="S"){
            S[y-1]=0;
        }else if(x=="H"){
            H[y-1]=0;
        }else if(x=="C"){
            C[y-1]=0;
        }else if(x=="D"){
            D[y-1]=0;
        }
    }
    for(int i=0;i<13;i++){
        if(S[i])cout<<"S "<<i+1<<endl;
        }for(int i=0;i<13;i++){
            if(H[i])cout<<"H "<<i+1<<endl;
        }for(int i=0;i<13;i++){
            if(C[i])cout<<"C "<<i+1<<endl;
        }for(int i=0;i<13;i++){
            if(D[i])cout<<"D "<<i+1<<endl;
        }
    
        
}
