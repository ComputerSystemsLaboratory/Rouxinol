#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std;

int f_primeNumber2(int x)
{
    int i; 
 
    for ( i = 2; i <= sqrt(x); ++i){
        if (x % i == 0 && x != i) return 1;
    }
    
    return 0;
}

int main(){
    int n;
    int x[10000];
    int i;
    int c=0;
    
    cin >> n;
    for ( i = 0;i < n; ++i ){
        cin >> x[i];    
    }

    for ( i = 0;i < n; ++i ){
        if (f_primeNumber2(x[i]) == 1){
            c = c +1;
        }
    }
    cout << n-c << endl;
    
    return 0;
}