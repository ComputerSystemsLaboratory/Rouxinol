#include <iostream>
using namespace std;
const int SIZE = 100000;

int Partition(int *A, int p, int r)
{
    int x = A[r - 1];
    int i = p;
    for (int j = p; j < r - 1; j++)
    {
        if (A[j] <= x)
        {
            int tmp = A[j];
            A[j] = A[i];
            A[i] = tmp;

            i++;
        }
    }

    int tmp = A[i];
    A[i] = A[r - 1];
    A[r - 1] = tmp;

    return i;
}

int main()
{
    int A[SIZE];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int par = Partition(A, 0, n);

    int i;
    for (i = 0; i < par; i++)
    {
        cout << A[i] << ' ';
    }
    cout << '[' << A[i] << ']' << ' ';
    i++;
    for (; i < n - 1; i++)
    {
        cout << A[i] << ' ';
    }
    cout << A[i] << endl;

    return 0;
}
