#include <iostream>
#include <vector>
#define N_NUM 100000

std::vector<long long> amount(N_NUM+1,0);

int main() {
    int N;
    std::cin >> N;
    long long Sum = 0;
    for(int i=1;i<N+1;i++){
        int A_i;
        std::cin >> A_i;
        amount[A_i] ++ ;
        Sum += A_i;
    }

    int Q;
    std::cin >> Q;
    for(int i=0;i<Q;i++){
        int B_i,C_i;
        std::cin >> B_i >> C_i;
        Sum -= B_i*amount[B_i];
        Sum += C_i*amount[B_i];
        amount[C_i] += amount[B_i];
        amount[B_i] = 0;
        std::cout << Sum << std::endl;
    }
    return 0;
}