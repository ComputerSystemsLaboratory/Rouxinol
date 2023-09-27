#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
#include <cstdio>

using namespace std;

int array[100];
int size;

int to_i(const string& num) {
    int res = 0;
    for (int i = 0; i < num.size(); ++i) {
        res = res * 10 + (num[i] - '0');
    }
    return res;
}

int main(void) {

    int n;
    cin >> n;
    size = n;

    for (int i = 0; i < n; ++i) {
        string num;
        cin >> num;
        array[i] = to_i(num);
    }

    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            printf("%d ", array[j]);
        }
        printf("%d\n", array[size - 1]);
        int key = array[i], j = 0;
        for (j = i - 1; j >= 0 && array[j] > key; --j) {
            array[j + 1] = array[j];
        }
        array[j + 1] = key;
    }
    for (int j = 0; j < size - 1; ++j) {
        printf("%d ", array[j]);
    }
    printf("%d\n", array[size - 1]);

    return 0;
}