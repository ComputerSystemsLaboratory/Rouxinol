//
// Created by Yuta Sato on 3/15/20.
//

#include <iostream>

void Range(int A, int B, int C){
    if( A < B && B < C){
        std::cout << "Yes" << std::endl;
    }
    else{
        std::cout << "No" << std::endl;
    }
}

int main(){
    // ---------------------------
    // ITP_1_2_A: Small, Large, or Equal
//    int a, b;
//    std::cin >> a >> b;
//    BigOrSmall(a,b);
    // ---------------------------

    // ---------------------------
    // ITP_1_2_B: Range
    int a, b, c;
    std::cin >> a >> b >> c;
    Range(a,b,c);
    // ---------------------------

    // ---------------------------
    // ITP_1_2_C:
    // ---------------------------

    // ---------------------------
    // ITP_1_2_B:
    // ---------------------------


    return 0;
}


