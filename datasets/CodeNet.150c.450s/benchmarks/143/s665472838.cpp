#include <iostream>
#include <vector>
#include <map>
using namespace std;

int N,Q; vector<int> A,B,C;
void input()
{
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    cin >> Q;
    B.resize(Q); C.resize(Q);
    for (int i = 0; i < Q; ++i) cin >> B[i] >> C[i];
}

void solve()
{
    long long sum = 0; 
    map<int,long long> M;
    for (int i = 0; i < N; ++i) {
        sum += A[i];
        M[A[i]]++;
    }

    for (int i = 0; i < Q; ++i){
        sum +=  M[B[i]] * (C[i] - B[i]);
        M[C[i]] += M[B[i]];
        M[B[i]] = 0;
        cout << sum << endl;
    }
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    // int ti = clock();
    input();
    solve();
    // printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
    return 0;
}