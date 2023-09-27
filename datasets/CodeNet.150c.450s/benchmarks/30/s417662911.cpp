#include <iostream>
#include <string>
#include <vector>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B&lang=jp
// 選択ソート
static void printArray(vector<int> vector) {
    int size = vector.size();
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            cout << vector[i] << endl;
        } else {
            cout << vector[i] << " ";
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int counter = 0;
    for (int i = 0; i < N; ++i) {
        int minj = i;
        for (int j = i; j < N; ++j) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }
        
        if(i != minj) {
            swap(A[i], A[minj]);
            ++counter;
        }
    }

    printArray(A);
    cout << counter << endl;

    return 0;
}


