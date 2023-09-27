#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define A_MAX 250
#define INVALID -2000000000

int main() {
    int m;
    int key;

    cin >> m;
    int* keys = new int[m];

    for (int i = 0; i < m; i++) {
        cin >> keys[i];
    }

    for (int i = 1; i < m+1; i++) {
        int parent = i / 2;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (left > m) left = INVALID;
        if (right > m) right = INVALID;

        cout << "node " << i << ": key = " << keys[i-1] << ", ";
        if (i != 1) {
            cout << "parent key = " << keys[parent-1] << ", ";
        }
        if (left != INVALID) {
            cout << "left key = " << keys[left-1] << ", ";
        }
        if (right != INVALID) {
            cout << "right key = " << keys[right-1] << ", ";
        }
        cout << endl;
    }

    return 0;
}

