#include <iostream>
using namespace std;

/**
 * Print out Array with a template.
 */
template <class T>
void printArray(T Array, int N)
{
    for (int i = 0; i < N; ++i)
    {
        if (i > 0) cout << " ";
        cout << Array[i];
    }
    cout << endl;
}

/**
 * Swap the value of a and b.
 */
void swap(int & a, int & b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

/**
 * SelectionSort
 * From start to the end, each turn gets the minimum value
 * at the right position.
 * @param A [Array]
 * @param N [Size of the array]
 */
void selectionSort(int A[], int N)
{
    int exchange_count = 0;
    for (int i = 0; i < N; ++i)
    {
        int min_index = i;
        for (int j = i; j < N; ++j)
        {
            if (A[j] < A[min_index])
            {
                min_index = j;
            }
        }
        if (i != min_index)
        {
            exchange_count++;
            swap(A[i], A[min_index]);
        }
    }
    printArray(A, N);
    cout << exchange_count << endl;
}

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; ++i) cin >> A[i];

    selectionSort(A, N);

    return 0;
}
