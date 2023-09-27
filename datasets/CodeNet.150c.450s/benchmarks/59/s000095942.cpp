#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
typedef long long ll;
using namespace std;

// Insertion Sort

int main(){
    int N;
    cin >> N;
    vector<int> A(N,0);
    REP(i,N){
        cin >> A[i];
    }
    REP(i,N-1){
        cout << A[i] << " ";
    }
    cout << A[N-1] << endl;

    for(int i = 1; i < N; i++){
        int v = A[i];
        int j = i-1;
        while(j>=0 && A[j]>v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        REP(i,N-1){
            cout << A[i] << " ";
        }
        cout << A[N-1] << endl;
    }

    return 0;
}