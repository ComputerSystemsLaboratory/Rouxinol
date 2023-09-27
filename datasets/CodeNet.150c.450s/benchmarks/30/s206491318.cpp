#include<iostream>
using namespace std;

void show(int* a, int n)
{
    for(int i = 0; i < n - 1; i++) cout << a[i] << " ";
    cout << a[n - 1] << endl;
}

void SelectionSort(int* a, int n)
{
    int i, j, c, minj, count;
    count = 0;

    for(i = 0; i < n; i++){
        minj = i;
        for(j = i; j < n; j++){
            if(a[minj] > a[j]) minj = j;
        }
        if(i < minj){
            c = a[minj];
            a[minj] = a[i];
            a[i] = c;
            count++;
        }
    }
    show(a, n);
    cout << count << endl;
}

int main()
{
    int N, A[100];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];
    SelectionSort(A, N);

    return 0;
}