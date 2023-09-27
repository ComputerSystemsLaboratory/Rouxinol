// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector< vector<int> >
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> A(N + 1), L(N + 1);
    for(int i = 1; i <= N; i++) cin >> A[i];

    L[0] = -1;
    int len = 0;
    for(int i = 1; i <= N; i++){
        if(L[len] < A[i]){
            len++;
            L[len] = A[i];
        } else {
            *lower_bound(L.begin(), L.begin() + len, A[i]) = A[i];
        }
    }

    cout << len << endl;
}
