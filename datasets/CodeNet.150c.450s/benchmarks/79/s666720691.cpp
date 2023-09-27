#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define mp make_pair

void solve(int N, vector<pii> &A) {
    vector<int> hana(N);
    for(int i = 0; i < N; i++) {
        hana[i] = N - i - 1;
    }
    for(int i = 0; i < A.size(); i++) {
        int p = A[i].first;
        int c = A[i].second;
        vector<int> newhana(N);
        for(int j = p; j < p + c; j++) {
            newhana[j - p] = hana[j];
        }
        for(int j = 0; j < p; j++) {
            newhana[c + j] = hana[j];
        }
        for(int j = 0; j < p + c; j++) {
            hana[j] = newhana[j];
        }
    }
    cout << hana[0] + 1 << endl;
}

int main() {
    int N, R;
    while(cin >> N >> R, R) {
        vector<pii> A(R);
        for(int i = 0; i < R; i++) {
            int p, c;
            cin >> p >> c;
            p -= 1;
            A[i] = mp(p, c);
        }
        solve(N, A);
    }
    return 0;
}

