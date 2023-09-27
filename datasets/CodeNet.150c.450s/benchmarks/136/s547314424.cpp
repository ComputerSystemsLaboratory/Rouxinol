#include <iostream>
#include <algorithm>
using namespace std;

long gcd(long a, long b){
    if(b > 0){
        return gcd(b, a % b);
    }else{
        return a;
    }
}

long lcm(long a, long b){
    return (a * b / gcd(a, b));
}

int main()
{
    long a, b;
    
    while(cin >> a >> b){
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    } 
    
    return 0;
}