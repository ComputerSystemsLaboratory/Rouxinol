#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int N,*A;
    cin >> N;
    A = (int *)malloc(sizeof(int)*N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int min = 2000000000;
    int plf = -2000000000;
    for (int i = 1; i < N; i++) {
        if (min > A[i-1]) min = A[i-1];
        if(A[i] - min > plf) plf = A[i] - min;
    }
    cout << plf << endl;
    return 0;
}