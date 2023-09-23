#include <iostream>
using namespace std;

int large = 1000000007;
unsigned long long temp;
unsigned long long power(unsigned long long	 m,unsigned long long	 n){
    if(n > 1) {
        temp = power(m,n/2);
        if(n%2 == 0){
            return temp * temp % large;
        }else{
            return ((temp * temp) % large * m) % large;
        }
    }else return m;
}

int main(){
    unsigned long long	 m,n;
    cin >> m >> n;
    cout << power(m,n)%large << endl;
    return 0;
}
