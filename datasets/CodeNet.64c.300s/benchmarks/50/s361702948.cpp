#include <iostream>
using namespace std;

void print_elements(int length, int elements[]) {
    cout << elements[0];
    for (int i = 1; i < length; i++) {
        cout << " " << elements[i];
    }
    cout << endl;
}

// Return how many times elements were swapped.
int bubble_sort(int N, int elements[]) {
    int n_swapped = 0;
    bool swapped  = true;

    while (swapped) {
        swapped = false;
        for (int i = N - 1; i > 0; i--) {
            int i_before = i - 1;
            if (elements[i] < elements[i_before]) {
                int bigger = elements[i_before];
                elements[i_before] = elements[i];
                elements[i] = bigger;
                swapped = true;
                n_swapped++;
            }
        }
    }
    return n_swapped;
}

/* ALDS1_2_A: Bubble Sort */
int main() {
    int N;
    cin >> N;

    int elements[N];
    for (int i = 0; i < N; i++) {
        cin >> elements[i];
    }

    int n_swapped = bubble_sort(N, elements);

    print_elements(N, elements);
    cout << n_swapped << endl;
    return 0;
}