#include <iostream>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) for (int i = 0; i < (n); ++i)

void print_A(int *A, int N)
{
    REP(i, N)
    {
        cout << A[i];
        if (i != N-1) cout << " ";
    }
    cout << endl;
    return;
}

void insertionSort(int *A, int N)
{
    int v, j;
    FOR(i, 1, N)
    {
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        print_A(A, N);
    }
}

int main()
{
    int N;
    int A[100];

    cin >> N;
    REP(i, N)
    {
        cin >> A[i];
    }

    print_A(A, N);
    insertionSort(A, N);
}
