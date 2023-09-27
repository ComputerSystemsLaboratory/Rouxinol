#include <iostream>

using namespace std;

int A[2000000];
int B[2000000];
int C[10001];

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> A[i];
        C[A[i]]++;
    }

    for(int i=1; i<=10000; i++){
        C[i] += C[i-1];
    }

    for(int j=n-1; j>=0; j--){
        B[--C[A[j]]] = A[j];
    }

    for(int i=0; i<n; i++){
        cout << B[i];
        if(i==n-1){
            cout << endl;
        } else {
            cout << ' ';
        }
    }
}