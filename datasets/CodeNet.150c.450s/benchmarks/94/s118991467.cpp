//
// Created by tac on 2016/10/25.
//

#include <cstdlib>
#include <iostream>

namespace {

const int N_SIZE = 100;
int a[N_SIZE];

void print_array(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            std::cout << " ";
        }
        std::cout << a[i];
    }
    std::cout << std::endl;
    return;
}

//1 bubbleSort(A, N) // N ??????????´?????????? 0-????????????????????? A
//2   flag = 1 // ????????£??\????´?????????¨??????
//3   while flag
//4     flag = 0
//5     for j ??? N-1 ?????? 1 ?????§
//6       if A[j] < A[j-1]
//7         A[j] ??¨ A[j-1] ?????????
//8         flag = 1
void sort_array(int a[], int n) {
    int count = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int j = n - 1; j > 0; --j) {
            if (a[j] < a[j - 1]) {
                std::swap(a[j], a[j - 1]);
                ++count;
                flag = true;
            }
        }
    }
    print_array(a, n);
    std::cout << count << std::endl;
    return;
}

}

int main() {
    int n;

    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    sort_array(a, n);

    return EXIT_SUCCESS;
}