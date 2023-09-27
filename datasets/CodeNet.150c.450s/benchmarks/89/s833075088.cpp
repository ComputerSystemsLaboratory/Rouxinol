#include<iostream>
#include<math.h>
#define INF 1000000

using namespace std;

bool isprime(long long n){
    for(int i=2; i<=floor(sqrt(n)); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int a,d,n,cnt;
    bool p[INF];
    for(int i=2;i<INF; i++) {
        if (isprime(i)) {
            p[i] = true;
        } else {
            p[i] = false;
        }
    }
    while(cin >> a >> d >> n && a!=0){
        cnt=0;
    for(int i = 0; i<INF; i++){
        long long k = a+ d * i;
        if (p[k]) {
            cnt++;
            if (cnt==n) {cout << k << endl; break;}
        }
    }
    }
}