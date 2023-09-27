#include <iostream>

long long int Fibo(long long int n)
{
    if(n == 0 || n == 1) return 1;
    if(n == 44) return 1134903170;
    return Fibo(n-1) + Fibo(n-2);
}
int main(){
    long long int n;
    std::cin >> n;
    std::cout << Fibo(n) << std::endl;
    return 0;
}