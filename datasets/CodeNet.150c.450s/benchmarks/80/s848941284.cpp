#include <iostream>
#include <numeric>

int main() {
    int a[4],b[4];
    for(int i=0;i<4;i++) scanf("%d",&a[i]);
    for(int i=0;i<4;i++) scanf("%d",&b[i]);
    
    int as=std::accumulate(a,a+4, 0), bs=std::accumulate(b,b+4, 0);
    as > bs ? std::cout << as << std::endl : std::cout << bs << std::endl;
    
    return 0;
}