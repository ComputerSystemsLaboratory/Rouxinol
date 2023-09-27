#include<iostream>

using namespace std;

bool isStable (char C[], int A[], int N, char c[], int a[]) {

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int x = 0; x < N - 1; x++) {
                for (int y = x + 1; y < N; y++) {
                    if (A[i] == A[j] && A[i] == a[x] && A[i] == a[y] && c[x] == C[j] && c[y] == C[i]) {
                        // cout << "i, j, x, y: " << i << j << x << y << endl;
                        // cout << A[i] << " == " << A[j] << " && " << c[x] << " == " << C[j] << " && " << c[y] <<  " == "  << C[i] << endl;
                        return false;
                    }
                }
            }
        }
    }

    return true;

}

bool bubbleSort (char C[], int A[], int N, char c[], int a[]) {

    // int cnt = 0;
    // bool stable = true;

    bool flag = true;

    while (flag) {
        flag = false;
        for (int i = N - 1; i > 0; i--) {
            if (A[i] < A[i - 1]) {
                swap (C[i], C[i - 1]);
                swap (A[i], A[i - 1]);
                flag = true;
                // disp (A, N);
            }
        }
        // cout << endl;
    }

    return isStable(C, A, N, c, a);

}

bool selectionSort (char C[], int A[], int N, char c[], int a[]) {
    
    // int cnt = 0;    // 入れ替え回数のカウント変数
    // bool stable = true;

    for (int i = 0; i < N - 1; i++) {
        int minj = i;

        for (int j = i; j < N; j++) {
            if (A[j] < A[minj]) {
                minj = j;
            }
        }

        if (i != minj) {
            swap (C[i], C[minj]);
            swap (A[i], A[minj]);
        }
    } 

    return isStable(C, A, N, c, a);

}

void disp (char C[], int A[], int N, bool stable) {

    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << C[i] << A[i];
    }

    cout << endl;
    
    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

}

int main () {

    int N;
    char C[36], Cb[36], Cs[36];
    int A[36], Ab[36], As[36];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> C[i] >> A[i];
        Cb[i] = C[i];
        Cs[i] = C[i];
        Ab[i] = A[i];
        As[i] = A[i];
    }

    bool stableB = bubbleSort(Cb, Ab, N, C, A);
    bool stableS = selectionSort(Cs, As, N, C, A);

    disp (Cb, Ab, N, stableB);
    disp (Cs, As, N, stableS);

    return 0;
}
