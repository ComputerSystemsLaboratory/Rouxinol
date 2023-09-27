#include<bits/stdc++.h>

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> A(n+1);

    for(int i = 1; i < n+1; i++){
        std::cin >> A[i];
    }
    for(int i = 1; i < n+1; i++){
        std::cout << "node " << i << ": key = " << A[i] << ", ";
        if(i != 1){
            std::cout << "parent key = " << A[i / 2] << ", "; 
        }
        if(2*i < n+1){
        std::cout << "left key = " << A[2*i] << ", ";
        }
        if(2*i+1 < n+1){
        std::cout << "right key = " << A[2*i+1] << ", ";
        }
        std::cout << std::endl;
    }
    return 0;
}
