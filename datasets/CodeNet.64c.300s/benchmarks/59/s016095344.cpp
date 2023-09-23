#include<iostream>
#include<cmath>
using namespace std;        
    
 bool isPrime(int x){
    if(x==2) return true;
    if(x<2||x%2==0) return false;
    
    int i=3;
    
    while(i<=sqrt(x)){
        if(x%i==0) return false;
        i=i+2;
    }
    return true;
}
int main(){
    int x,n,cnt=0;
    cin>>n;
    
    
    for(int j=0;j<n;j++){
        cin>>x;
        if(isPrime(x)) cnt++;
    }
    cout<<cnt<<endl;
}