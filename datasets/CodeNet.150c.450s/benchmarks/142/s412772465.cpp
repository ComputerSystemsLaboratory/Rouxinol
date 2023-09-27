#include <bits/stdc++.h>

int main(){
    int N, K;
    std::cin >> N >> K;
    std::vector< int > A(N);
    for(int i=0; i<N; i++){
        std::cin >> A[i];
    }
    
    for(int i=0; i<N-K; i++){
        if(A[i] < A[i+K]){
            std::cout << "Yes" << std::endl;
        }else{
            std::cout << "No" << std::endl;
        }
    }
    
    return 0;
    
}
