#include <iostream>
#include <stdio.h>
#include <math.h>
typedef unsigned long long int ll;

using namespace std;

ll Euclid(ll m, ll n){
    if(n == 0)  return m;
    else        return Euclid(n, m % n);
}

int main(){
    ll gcd;    //the greatest common divisor
    ll lcm;    //least common multiple
    ll m, n, tmp;
    while (cin >> m >> n){
        if(m < n){
            tmp = m;
            m = n;
            n = tmp;
        }
        gcd = Euclid(m, n);
        lcm = m * n / gcd;
        cout << gcd << " " << lcm << endl;
    }
	return 0;
}