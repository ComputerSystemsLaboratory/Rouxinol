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

void bubbleSort(int* A, int n)
{
    int flag = 1;
    int count = 0;

    while(flag)
    {
        flag = 0;
        for(int i = n-1; i > 0; i--)
        {
            if(A[i] < A[i-1])
            {
                int temp = A[i];
                A[i] = A[i-1];
                A[i-1] = temp;
                flag = 1;
                count++;
            }
        }
    }

    trace(A, n);
    cout << count << endl;

    return;
}

int main(void)
{
    int n;
    int A[100];

    cin >> n;
    for(int i=0; i<n; i++) cin >> A[i];

    bubbleSort(A, n);
    
    return 0;
}