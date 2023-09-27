#include <bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

int partition(vector<int>& A, int p, int r) {
    int x = A[r];
    int i = p-1;
    for (int j=p; j <= r - 1; j++) {
        if (A[j] <= x) {
            i = i + 1;
            int tmp_i = A[i];
            A[i] = A[j];
            A[j] = tmp_i;
        }
    }
    int tmp_i_ = A[i+1];
    A[i+1] = x;
    A[r] = tmp_i_;
    return i+1;
}

int main()
{
    int N;
    cin >> N;

    vector<int>vec(N);
    for (int i=0; i < N; i++) {
        cin >> vec.at(i);
    }

    int q = partition(vec, 0, N-1);
    for (int i =0; i < N; i++) {
        if (i) {
            printf(" ");
        }

        if (i == q) {
            printf("[");
        }
        printf("%d", vec[i]);
        if (i == q) {
            printf("]");
        }
    }
    printf("\n");
    return 0;
}
