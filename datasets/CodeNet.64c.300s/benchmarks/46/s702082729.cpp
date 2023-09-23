#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long int n){
        if(n == 1 || n == 0) return false;
        for(int i=2;i<=sqrt(n);i++){
                if(n%i==0) return false;
        }
        return true;
}

int main(){
        long long int a,d,n;
        while(cin >> a >> d >> n,a){
                while(1){
                        if(isPrime(a)){
                                n--;
                                if(n==0) {
                                        cout << a << endl;
                                        break;
                                }
                        }
                        a+=d;
                }
        }
        return 0;
}