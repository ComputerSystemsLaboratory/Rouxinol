#include <iostream>
int main(){
    int n,i;
    std::cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        std::cin >> a[i];
    }
    for(i=0;i<n;i++){
        if(i > 0) std::cout << " ";
        std::cout << a[n-1-i];
    }
    std::cout << std::endl;
    return 0;
}
