#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0)return 0;
        
    int a[n];
    int b[n];
    
    int ansa=0,ansb=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]>b[i]){ansa+=a[i];ansa+=b[i];}
        else if(a[i]<b[i]){ansb+=a[i];ansb+=b[i];}
        else{ansa+=a[i];ansb+=b[i];}
        
    }
        cout<<ansa<<" "<<ansb<<endl;
        
    }
}