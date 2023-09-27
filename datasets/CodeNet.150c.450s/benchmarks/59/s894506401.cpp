#include <iostream>
#include <algorithm>

using namespace std;

void trace(int* A, int n)
{
    cout << A[0];
    for(int i=1; i < n; i++)
    {
        cout << " " << A[i];
    }
    cout << endl;

    return;
}

void insertionSort(int* A, int n)
{
    trace(A, n);

    for(int i=1; i<n; i++)
    {
        int v = A[i];
        int j = i - 1;

        while(j >= 0 && A[j] > v)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;

        trace(A, n);
    }

    return;
}


int main(void)
{
    int n;
    int input;
    int A[100];

    cin >> n;
    for(int i=0; i < n; i++) cin >> A[i];

    insertionSort(A, n);

    return 0;
}