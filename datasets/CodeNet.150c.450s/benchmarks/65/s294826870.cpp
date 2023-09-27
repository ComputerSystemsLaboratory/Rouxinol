#include <iostream>
#include <string>
#include <utility>
using namespace std;

void printArray(string c[], int n) {
    string sep = "";
    for (int i = 0; i < n; i++) {
        cout << sep << c[i];
        sep = " ";
    }
    cout << endl;
}

bool isStable(string c[], string stableArray[], int n) {
    bool stable = true;
    for (int i = 0; i < n; i++) {
        if (c[i] != stableArray[i]) {
            stable = false;
            break;
        }
    }
    return stable;
}

void bubbleSort(string c[], int n) {
    bool flag = true;
    for (int i = 0; flag; i++) {
        flag = false;
        for (int j = n - 1; j > i; j--) {
            if (c[j - 1][1] > c[j][1]) {
                swap(c[j - 1], c[j]);
                flag = true;
            }
        }
    }
}

void selectionSort(string c[], int n) {
    for (int i = 0; i < n; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            if (c[j][1] < c[minj][1]) {
                minj = j;
            }
        }
        swap(c[i], c[minj]);
    }
}

int main() {
    int n;
    cin >> n;

    string a[n];
    string b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    bubbleSort(a, n);
    selectionSort(b, n);

    printArray(a, n);
    cout << "Stable" << endl;
    printArray(b, n);
    if (isStable(b, a, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
}