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

void selectionSort(int A[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        int minj = i;
        for(int j = i; j < n; j++)
        {
            if(A[j] < A[minj])
                minj = j;
        }
        if(minj != i)
        {
            swap(A[i], A[minj]);
            count++;
        }
    }

    trace(A, n);
    cout << count << endl;

    return;
}

int main(void)
{
    int n;
    int input;
    int A[100];

    cin >> n;
    for(int i=0; i < n; i++) cin >> A[i];

    selectionSort(A, n);

    return 0;
}