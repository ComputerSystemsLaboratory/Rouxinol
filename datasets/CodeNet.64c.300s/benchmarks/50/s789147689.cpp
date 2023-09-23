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

int BubbleSort(int *A, int N)
{
    bool flag = true;
    int exchange_num = 0;
    while (flag) {
        flag = false;
        for (int j = N-1; j > 0; j--) {
            if (A[j] < A[j-1]) {
                int tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                flag = true;
                exchange_num++;
            }
        }
    }
    return exchange_num;
}

int main(int argc, char* argv[])
{
    int array_size = 0;
    int array[100];

    std::cin >> array_size;
    for (int i = 0; i < array_size; i++) {
        std::cin >> array[i];
    }

    int exchange_num = BubbleSort(array, array_size);
    ArrayDump(array, array_size);
    std::cout << exchange_num << std::endl;
}
