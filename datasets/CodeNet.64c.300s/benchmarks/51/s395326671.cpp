#include<iostream>

using namespace std;
long long sum(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return n*sum(n-1);
  
    }
    
    int main(){
        int n;
        cin>>n;
        cout<<sum(n)<<endl; 
        
        return 0;
    }