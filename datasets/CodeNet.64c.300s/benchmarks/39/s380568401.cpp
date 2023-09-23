#include <iostream>

int main()
{
    int n;
    int cnt;  // 正解個数
    
    while (std::cin >> n){
        cnt = 0;
        for (int a = 0; a < 10; a++){
            for (int b = 0; b < 10; b++){
                for (int c = 0; c < 10; c++){
                    for (int d = 0; d < 10; d++){
                        if (a + b + c + d == n){
                            cnt++;
                        }
                    }
                }
            }
        }
        std::cout << cnt << std::endl;
    }
    
    return 0;
}