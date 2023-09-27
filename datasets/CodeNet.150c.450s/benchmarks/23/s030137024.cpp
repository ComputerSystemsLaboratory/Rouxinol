#include <iostream>

long long int Fibo(int n)
{
    long long int a = 1;
    long long int pre = 1;
    long long int prepre = 1;
    for(int i = 2; i <= n; ++i){
        a = pre + prepre;
        prepre = pre;
        pre = a;
    }
    return a;
}
int main(){
    int n;
    std::cin >> n;
    std::cout << Fibo(n) << std::endl;
    return 0;
}