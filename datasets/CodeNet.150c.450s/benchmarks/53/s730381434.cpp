#include <iostream>

using namespace std;

template<typename T, class F>
void prime_factors(T n, const F f){
    for(T k=2; k*k<=n; ++k){
        while(n % k == 0)f(k), n /= k;
    }
    if(1 < n)f(n);
}

int main(){
    int n;
    cin >> n;
    auto func = [](int x){cout << ' ' << x;};
    cout << n << ':';
    prime_factors(n, func);
    cout << '\n';
    return 0;
}