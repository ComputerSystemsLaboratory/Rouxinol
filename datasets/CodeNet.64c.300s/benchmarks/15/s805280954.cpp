#include <iostream>

using namespace std;

void print(int *p, int n)
{
    cout << p[0];
    for (int i = 1; i < n; i++) cout << " " << p[i];
    cout << endl;
}

int selectionsort(int *p, int n)
{
    int minj, j, v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        minj = i;
        for (j = i; j < n; j++) if (p[j] < p[minj]) minj = j;
        if (minj != i)
        {
            v = p[i];
            p[i] = p[minj];
            p[minj] = v;
            count++;
        }
    }
    return count;
}

int main(void)
{
    int A[100];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    int count = selectionsort(A, N);
    print(A, N);
    cout << count << endl;
    return 0;
}
