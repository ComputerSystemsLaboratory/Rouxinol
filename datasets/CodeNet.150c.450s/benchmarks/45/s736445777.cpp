#include <iostream>
#include <cmath>

using namespace std;

long pow(long x,long n,long M){
    long res = 1;
    if(n > 0){
        res = pow(x,n / 2,M);
        if(n % 2 == 0){
            res = (res * res) % M;
        }else{
            res = (((res * res) % M) * x) % M;
        }
    }
    return res;
}

int main(){
    int m,n;
    cin >> m >> n;
    
    cout << pow(m,n,1000000007) << endl;
    return 0;
}

