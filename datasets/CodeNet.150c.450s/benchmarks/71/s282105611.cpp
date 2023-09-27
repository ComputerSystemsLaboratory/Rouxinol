#include <iostream>
int n = 0;
int main(void){
    int a, b, c, d;
    int cnt;
    while(std::cin >> n){
        cnt = 0;
        for(a=0; a<=9; ++a) for(b=0; b<=9; ++b) for(c=0; c<=9; ++c) for(d=0; d<=9; ++d) if(a+b+c+d == n) cnt++;
        std::cout << cnt << std::endl;
    }
}