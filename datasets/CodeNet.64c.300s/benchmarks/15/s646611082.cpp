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

//1 selectionSort(A, N) // N??????????´??????????0-?????????????????????A
//2   for i ??? 0 ?????? N-1 ?????§
//3     minj = i
//4     for j ??? i ?????? N-1 ?????§
//5       if A[j] < A[minj]
//6         minj = j
//7     A[i] ??¨ A[minj] ?????????
void sort_array(int a[], int n) {
    int count = 0;
    int minj;
    for (int i = 0; i < n; ++i) {
        minj = i;
        for (int j = i; j < n; ++j) {
            if (a[j] < a[minj]) {
                minj = j;
            }
        }
        std::swap(a[i], a[minj]);
        if (i != minj) {
            ++count;
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