#include<iostream>

#define MAX_N 100

int a[MAX_N], n;

void swap(int start, int target){
    int tmp = a[target];
    for(int i = target - 1; i >= start; --i)
        a[i + 1] = a[i];
    a[start] = tmp;
}

int main(){
    std::cin >> n;
    for(int i = 0; i < n; ++i)
        std::cin >> a[i];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i; ++j){
            if(a[j] > a[i]){
                swap(j, i);
                break;
            }
        }
        for(int k = 0; k < n; ++k){
            std::cout << a[k];
            if(k + 1 != n)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}