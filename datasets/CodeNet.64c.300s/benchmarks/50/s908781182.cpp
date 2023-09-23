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
    for (int i = 0; i < N - 1; ++i) {
        for (int j = N - 1; j >= i + 1; --j) {
            if (array[j - 1] > array[j]) {
                int tmp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = tmp;
                ++total;
            }
        }
    }

    for (int i = 0; i < N - 1; ++i) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[N - 1]);
    printf("%d\n", total);

    return 0;
}