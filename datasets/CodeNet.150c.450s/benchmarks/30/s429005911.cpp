#include <iostream>

using namespace std;

int main() {
    int N;
    int counter = 0;
    int A[100];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        int min_j = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[min_j]) {
                min_j = j;
            }
        }
        if (A[i] != A[min_j]) {
            int temp = A[i];
            A[i] = A[min_j];
            A[min_j] = temp;
            counter++;
        }
    }

    for (int i = 0; i < N-1; i++) {
        cout << A[i] << " ";
    }
    cout << A[N-1] << endl;
    cout << counter << endl;
    return 0;
}