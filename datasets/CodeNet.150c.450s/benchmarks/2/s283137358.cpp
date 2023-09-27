#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &A, int p, int r) {
    int x = A.at(r - 1);
    int i = p - 1;
    for (int j = p; j < r-1; j++) {
        if (A.at(j) <= x) {
            i++;
            int tmp = A.at(j);
            A.at(j) = A.at(i);
            A.at(i) = tmp;
        }
    }
    int tmp = A.at(r-1);
    A.at(r-1) = A.at(i + 1);
    A.at(i + 1) = tmp;
    return i+1;
}

    int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int q = partition(A, 0, N);
    for (int i = 0; i < N; i++) {
        if (i)
            cout << " ";

        if (i == q)
        {
            cout << "[" << A.at(i) << "]";
        }
        else
        {
            cout << A.at(i);
        }
    }
    cout << endl;
}
