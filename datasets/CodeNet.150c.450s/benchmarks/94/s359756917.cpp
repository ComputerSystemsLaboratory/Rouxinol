//
//  ALDS12A_BubbleSort.cpp
//  CppAlgorithmSet
//
//  Created by 蒋春恺 on 2018/12/19.
//  Copyright © 2018 蒋春恺. All rights reserved.
//

#include <iostream>

using namespace std;

template <class T>
void printArray(T Array, int size)
{
    for (int i = 0; i < size; i++) {
        cout << Array[i];
        if (i != size - 1) cout << " ";
    }
    cout << endl;
}

void swap(int & a, int & b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void bubbleSort(int A[], int N)
{
    int count = 0;
    bool flag = true;
    
    while (flag) {
        flag = false;
        for (int j = N - 1; j > 0; j--) {
            if (A[j] < A[j-1]) {
                count++;
                swap(A[j], A[j-1]);
                flag = true;
            }
        }
    }
    
    printArray(A, N);
    cout << count << endl;
}

int main()
{
    int N;
    cin >> N;
    
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    bubbleSort(A, N);
    
    return 0;
}

