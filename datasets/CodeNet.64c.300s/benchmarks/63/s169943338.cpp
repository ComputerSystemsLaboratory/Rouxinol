#include <iostream>

int calcGcd(int m, int n){
    return n == 0 ? m : calcGcd(n, m%n);
}

inline int calcLcm(int m, int n, int gcd){
    return m / gcd * n;
}

int main(){
    int x, y;
	
    while(std::cin >> x >> y){
		int gcd, lcm;
        if(x > y) gcd = calcGcd(x, y);
        else gcd = calcGcd(y, x);
        lcm = calcLcm(x, y, gcd);
         
        std::cout << gcd << " " << lcm << std::endl;
    }
     
    return 0;
}