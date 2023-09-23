#include <iostream>
bool isRight(int a, int b, int c)
{
    //?????§???c??????????????????????????´???
    if (a > c) {
        std::swap(a, c);
    }
    if (b > c){
        std::swap(b, c);
    }
    
    return a * a + b * b == c * c;
}

int main()
{
    int N;
    int a, b, c;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> a >> b >> c;
        if (isRight(a, b, c)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}