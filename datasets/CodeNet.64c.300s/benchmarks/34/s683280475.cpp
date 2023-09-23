#include <iostream>

void ArrayDump(int *A, int N)
{
    for (int i = 0; i < N; i++) {
        std::cout << *(A + i);
        if (i != N - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void InsertionSort(int *A, int N)
{
    for (int i = 1; i < N; i++) {
        int v = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > v) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        ArrayDump(A, N);
    }
}

int main(int argc, char* argv[])
{
    int array_size = 0;
    int array[100];

    std::cin >> array_size;
    for (int i = 0; i < array_size; i++) {
        std::cin >> array[i];
    }

    ArrayDump(array, array_size);
    InsertionSort(array, array_size);
}
