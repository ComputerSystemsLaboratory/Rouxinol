#include<bits/stdc++.h>
using namespace std;

int N = 10, A[11];


signed main()
{
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A, A + N);
    for(int i = N - 1; i >= N - 3; i--){
        cout << A[i] << endl;
    }

    return 0;
}

