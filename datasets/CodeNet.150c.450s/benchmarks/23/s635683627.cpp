#include <iostream>
#include <vector>

int Fibonacci( int n, std::vector<int>& v ){
    if( !n || n == 1 ){
        if( !v[n] ){
            v[n] = 1;
        }
        return v[n];
    }else{
        if( !v[n] ){
            v[n] = Fibonacci( n-1, v ) + Fibonacci( n-2, v );
        }
        return v[n];
    }
}

int main(){
    int n;
    std::cin.tie(0);
    std::cin >> n;

    std::vector<int> fib(n+1, 0);
    
    std::cout << Fibonacci( n, fib ) << std::endl;
}
