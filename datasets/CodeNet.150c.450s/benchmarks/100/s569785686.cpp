#include <iostream>
using namespace std;

unsigned long factorial(unsigned long n){
    
    unsigned long ans = (n>1)? n*factorial(n-1):1;
    
    return  ans;
}


int main (int argc, char const* argv[]){
    unsigned long n, ans;
    
    cin >> n;
    
    ans = factorial(n);
    cout << ans << endl;
    
    return 0;
}