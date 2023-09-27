#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    int i=2;
    cin>>n;
    cout<<n<<":";
    if(isPrime(n)){
        cout<<' '<<n<<endl;
        return 0;
    }
    while(n>1){
        while(n%i!=0 && !isPrime(i)) i++;
        while(n%i==0){
            cout<<' '<<i;
            n/=i;
        }
        i+=1;
    }
    cout<<endl;
    return 0;
}

