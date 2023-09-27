#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;

#if DEBUG && !ONLINE_JUDGE
    ifstream input_from_file("input.txt");
    #define cin input_from_file
#else

#endif





//~ bool gauss (vector < bitset<P> > a) {
    //~ int n = a.size();
    //~ int m = P-1;
    //~ vector<int> where (m, -1);
    //~ for (int col=0, row=0; col<m && row<n; ++col) {
        //~ for (int i=row; i<n; ++i)
            //~ if (a[i][col]) {
                //~ swap (a[i], a[row]);
                //~ break;
            //~ }
        //~ if (! a[row][col])
            //~ continue;
        //~ where[col] = row;

        //~ for (int i=0; i<n; ++i)
            //~ if (i != row && a[i][col])
                //~ a[i] ^= a[row];
        //~ ++row;
    //~ }
    //~ for (int i = 0; i < n; i++) {
        //~ if ()
    //~ }
    //~ ans.assign (m, 0);
    //~ for (int i=0; i<m; ++i)
        //~ if (where[i] != -1)
            //~ ans[i] = a[where[i]][m] / a[where[i]][i];
    //~ for (int i=0; i<n; ++i) {
        //~ double sum = 0;
        //~ for (int j=0; j<m; ++j)
            //~ sum += ans[j] * a[i][j];
        //~ if (abs (sum - a[i][m]) > EPS)
            //~ return 0;
    //~ }

    //~ for (int i=0; i<m; ++i)
        //~ if (where[i] == -1)
            //~ return 2;
    //~ return 1;
//~ }

const int MAXN = 210;
const int m = 60;

//~ const int MAXN = 10;
//~ const int m = 2;

bool solvable(vector<LL> a, LL b) {
    if (a.empty()) return false;
    int n = (int)a.size();
    vector<bitset<MAXN>> bs(m,0);
    //~ cout << "Solve\n";
    //~ for (LL x : a) cout << x << " ";
    //~ cout << ": ";
    //~ cout << b << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) if (a[i]&(1ll<<j)) bs[j][i] = 1;
    }
    for (int j = 0; j < m; j++) if (b&(1ll<<j)) bs[j][n] = 1;
    //~ for (int j = 0; j < m; j++) {
        //~ cout << bs[j] << endl;
    //~ }
    int actrow = 0;
    for (int i = 0; i < n; i++) {
        for (int j = actrow+1; j < m; j++) if (bs[j][i]) {
            swap(bs[j], bs[actrow]);
            //~ cout << i << " " << actrow << " " << j << endl;
        }
        if (!bs[actrow][i]) continue;
        for (int j = actrow+1; j < m; j++) if (bs[j][i]) {
            bs[j] ^= bs[actrow];
            //~ cout << j << " " << i << endl;
        }
        actrow++;
        if (actrow == m) break;
    }
    //~ for (int j = 0; j < m; j++) {
        //~ cout << bs[j] << endl;
    //~ }
    //~ cout << actrow << endl;
    for (int j = actrow; j < m; j++) if (bs[j][n]) return false;
    return true;
}

int solve() {
    int N;
    cin >> N;
    vector<LL> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    //~ for (int i = 0; i < N; i++) cout << A[i] << endl;
    string S;
    cin >> S;
    for (int i = 0; i < N; i++) {
        //~ cout << i << " " << S[i] << endl;
        if (S[i] == '1') {
            vector<LL> a;
            //~ cout << A[i] << endl;
            for (int j = i+1; j < N; j++) if (S[j] == '0') a.push_back(A[j]);
            if (!solvable(a, A[i])) return 1;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); // Togliere nei problemi con query online

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        cout << solve() << "\n";
    }
}
