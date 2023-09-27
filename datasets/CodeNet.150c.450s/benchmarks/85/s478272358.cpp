#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int calc(const vector<pair<int, int> >& M, int idx_b, int idx_e,
         vector<vector<int> >& Memo) {
    if (idx_b == idx_e) return 0;
    if (Memo[idx_b][idx_e]) return Memo[idx_b][idx_e];
    int min = 2e9;
    for (int i = idx_b; i < idx_e; i++) {
        int val  = calc(M, idx_b, i, Memo) + calc(M, i + 1, idx_e, Memo)
                   + M[idx_b].first * M[i].second * M[idx_e].second;
        if (val < min) min = val;
    }
    return Memo[idx_b][idx_e] = min;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > M;

    for (int i = 0; i < n; i++) {
        pair<int, int> input;
        cin >> input.first >> input.second;
        M.push_back(input);
    }
    vector<int> tmp(n, 0);
    vector<vector<int> > Memo(n, tmp);
    cout << calc(M, 0, M.size() - 1, Memo) << endl;

    return 0;
}