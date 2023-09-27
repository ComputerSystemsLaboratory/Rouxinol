#include <iostream>
using namespace std;

void print_elements(int, int[]);

/* ALDS1_1_A: Insertion sort */
int main() {
    int length;
    cin >> length;

    int elements[length];
    for (int i = 0; i < length; i++) {
        cin >> elements[i];
    }
    print_elements(length, elements);

    int elem, i_before;
    for (int i = 1; i < length; i++) {
        elem = elements[i];
        i_before = i - 1;

        while (0 <= i_before && elem < elements[i_before]) {
            elements[i_before + 1] = elements[i_before];
            i_before--;
        }
        elements[i_before + 1] = elem;
        print_elements(length, elements);
    }

    return 0;
}

void print_elements(int length, int elements[]) {
    cout << elements[0];
    for (int i = 1; i < length; i++) {
        cout << " " << elements[i];
    }
    cout << endl;
}