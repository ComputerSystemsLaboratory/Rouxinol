#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {

    int N;
    cin >> N;

    int *array = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> array[i];
    }

    int total = 0;
    for (int i = 0, min; i < N; ++i) {
        min = i;
        for (int j = i; j < N; ++j) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (i == min) continue;
        int tmp = array[min];
        array[min] = array[i];
        array[i] = tmp;
        ++total;
    }

    for (int i = 0; i < N - 1; ++i) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[N - 1]);
    printf("%d\n", total);

    delete[] array;
    return 0;
}