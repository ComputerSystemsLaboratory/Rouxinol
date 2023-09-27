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

int partition(vector<int> &A, int p, int r){
    int x = A[r];
    int i = p - 1;
    for(int j = p; j < r; j++){
        if(A[j] <= x){
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    int p = partition(A, 0, N - 1);
    rep(i, N){
        if(i) cout << ' ';
        if(i == p) cout << "[" << A[i] << "]";
        else cout << A[i];
    }
    cout << endl;
}
