// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

// #include <boost/multiprecision/cpp_dec_float.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// namespace mp = boost::multiprecision;
// using Bint = mp::cpp_int;
// using Real = mp::number<mp::cpp_dec_float<1024>>;


void CountingSort(vector<int> &A, vector<int> &B, int k){
    vector<int> C(k + 1, 0);
    rep(i, A.size()) C[A[i]]++;
    rep(i, k) C[i + 1] += C[i];
    for(int i = A.size() - 1; i >= 0; i--){
        C[A[i]]--;
        B[C[A[i]]] = A[i];
    }
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    CountingSort(A, B, 10010);
    rep(i, N){
        if(i) cout << ' ';
        cout << B[i];
    }
    cout << endl;
}
