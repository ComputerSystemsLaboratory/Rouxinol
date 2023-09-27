#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

#define ll long long

int main()
{
    ll N;
    ll sum = 0;
    std::cin >> N;

    std::map<ll, ll>A;

    for(ll i=0; i < N; i++) {
        ll x;
        std::cin >> x;
        sum += x;
        A[x]++;
    }
    
    ll Q;
    std::cin >> Q;
    ll q = Q;
    std::vector<ll> sum_list(Q);
    ll i = 0;

    while(q > 0) {
        //std::cout << "!??" << std::endl;
        ll B, C;
        std::cin >> B;
        std::cin >> C;
        ll diff = C - B;
        sum += diff * A[B];
        A[C] += A[B];
        A[B] = 0;
        sum_list[i] = sum;
        i++;
        q--;
    }

    for(ll j=0; j < Q; j++) {
        std::cout << sum_list[j] << std::endl;
    }
}