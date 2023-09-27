#include <iostream>
int main(){
    int n,x,y;
    while(true){
        std::cin >> n >> x;
        if(n == 0&&x == 0)break;
        y = 0;
        for(int a = 1;a <= n;a++){
            for(int b = 1;b <= n;b++){
                for(int c = 1;c <= n;c++){
                    if(a + b + c == x){
                        y = y + 1;
                        if(a == b||a == c||b == c||a > b||a > c||b > c||a > n||b > n||c > n){
                            y = y - 1;
                        }
                    }
                }
            }
        }
        std::cout << y << std::endl;
    }
    return 0;
}