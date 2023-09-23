#include<bits/stdc++.h>

int main(void){
    int S;
    int h, m, s;

    std::cin >> S;

    std::cout << S / 3600 << ":" << (S / 60) % 60 << ":" << (S % 3600) % 60 << std::endl;
    return 0;
}