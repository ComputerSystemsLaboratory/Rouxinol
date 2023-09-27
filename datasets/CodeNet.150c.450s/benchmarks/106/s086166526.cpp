#include<iostream>
using namespace std;
int main(){
    int a,b,c,i,A,S;
    cin>>a>>b>>c;
    S=0;
    for(i=a;i<=b;i++){
        A=c%i;
        if(A==0){S=S+1;}
        }
    cout<<S<<endl;
    
    return 0;
}