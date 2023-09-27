#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template <class T>
void print(T& x){printf("%d\n", x);}

bool IsPrime(int m){
    if(m<2) return false;
    if(m==2) return true;
    if(m%2==0) return false;

    double root_m = sqrt(m);

    for(int i=3; i<root_m; i+=2){
        if(m%i==0) return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    printf("%d:", n);
    if(IsPrime(n)){
        printf(" %d\n", n);
        return 0;
    }
    while(n%2==0){
        printf(" %d", 2);
        n/=2;
    }
    
    int divider = 3;

    while(divider<n){
        while(n%divider==0){
            printf(" %d", divider);
            n /= divider;
        }

        while(1){
            divider += 2;
            if(IsPrime(divider)) break;
        }
    }
    if(divider==n) {
        printf(" %d\n", divider);
    }else{
        printf("\n");
    }
    
    return 0;
}
