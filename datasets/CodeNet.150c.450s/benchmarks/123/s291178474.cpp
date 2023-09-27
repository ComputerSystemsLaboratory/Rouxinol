#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

constexpr bool isPrime(int n){
    if (n<2) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    for (int i=3;i<=sqrt(n);i+=2) if (n%i==0) return false;
    return true;
}

int main(){
    int nb; cin>>nb;
    std::vector<int> lines; lines.resize(nb);
    for(auto& a:lines) cin>>a;
    
    int counter=0;
    for(auto& a:lines) if(isPrime(a)) counter++; 
    cout<<counter<<endl;
}