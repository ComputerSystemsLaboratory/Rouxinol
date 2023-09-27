#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(c) (c).begin(), (c).end()

int main(){
    int N, M, P;
    while(cin >> N >> M >> P, N|M|P){
        M--;
        vector<int> X(N);
        rep(i, N)cin >> X[i];
        cout << (X[M]? accumulate(all(X), 0) * (100 - P) / X[M]: 0) << '\n';
    }
    return 0;
}