#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,N) for(int i = 0; i < (N); i++)
#define erep(i,N) for(int i = N; i >= 0; i--)
const ll INF = 1000000000000000000;
//input
int N,K;


//processing



//dpTable
//int dp[100050];

int main(){
    cin >> N >> K;
    int A[N];
    rep (i,N){
        cin >> A[i];
    }
    for (int i = 0; i + K < N; i++){
        if (A[i] < A[i + K]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}