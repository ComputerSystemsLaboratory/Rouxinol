#include <iostream>

long long A[100001] ={};

int main() {
    long long N;
    std::cin >> N;
    long long sum = 0;
    for (int i=0; i<N; i++) {
        long long tmp;
        std::cin >> tmp;
        A[tmp]++;
        sum += tmp;
    }
    long long Q;
    std::cin >> Q;
    for (int i=0; i<Q; i++) {
        long long B, C;
        std::cin >> B >> C;
        sum += A[B] * (C-B);
        A[C] += A[B];
        A[B] = 0;
        std::cout << sum << std::endl;
    }
}