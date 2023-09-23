#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define N_MAX 44

int A[N_MAX];

int fibonacci(int n) 
{
    if (n == 0 || n == 1) return A[n];
    else {
        A[n-1] = fibonacci(n-1);
        return A[n-1] + A[n-2];
    }
}

int main() {
    int n;

    A[0] = 1;
    A[1] = 1;
    cin >> n;

    int fb = fibonacci(n);

    cout << fb << endl;

    return 0;
}

