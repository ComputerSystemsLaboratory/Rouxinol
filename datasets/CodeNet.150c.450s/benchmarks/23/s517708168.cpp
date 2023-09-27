#include <iostream>
#include <vector>

template <typename T>
T fib(int n){
    std::vector<T> fibs{1, 1}; // using C++11
    for (int i = 2; i <= n; i++){
        fibs.push_back(fibs[i - 2] + fibs[i - 1]);
    }
    return fibs[n];
}

int main(){
    int n;
    std::cin >> n;
    std::cout << fib<int>(n) << std::endl;
}