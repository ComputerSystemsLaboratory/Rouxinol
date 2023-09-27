#include <iostream>
using namespace std;

bool prime_check(int n){
    switch(n){
        case 1: return false;
        case 2: return true;
    } 
    if(n%2 == 0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int a,d,n;
    while(cin>>a>>d>>n, n!=0){
       int count=0,ans=0,num;
       for(int i=0; count!=n ;i++){
            num = a + (d*i);
            if(prime_check(num)==true){
               count++;
               ans = num;
           }
       }
       cout << ans << endl;
    }
}