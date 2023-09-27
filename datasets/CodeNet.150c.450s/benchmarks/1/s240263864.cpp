#include<bits/stdc++.h>

const static int MAX = 100000;

int n, A[MAX+1], L[MAX];

int lis(){
    L[0] = A[0];
    int length = 1;

    for(int i = 1; i < n; i++){
        if(L[length-1] < A[i]){
            L[length++] = A[i];
        }else{
            std::sort(L, L + length);
            auto j = std::lower_bound(L, L + length, A[i]);
            *j = A[i];
        }
    }
    
    return length;
}

int main(){
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }

    std::cout << lis() << std::endl;

    return 0;
}
