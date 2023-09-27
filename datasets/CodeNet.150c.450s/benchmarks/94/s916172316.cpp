#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
using namespace std;

int N, t;
vector<int> A;

int main(){
    cin >> N;
    REP(i,N){
        cin >> t;
        A.push_back(t);
    }

    int c = 0;
    int flag = 1;
    while(flag){
        flag = 0;
        for(int j = N-1; j >= 1; j--){
            if(A[j] < A[j-1]){
                swap(A[j],A[j-1]);
                c++;
                flag = 1;
            }
        }
    }

    REP(i,N-1) cout << A[i] << " "; cout << A[N-1] << endl;
    cout << c << endl;
    return 0;
}