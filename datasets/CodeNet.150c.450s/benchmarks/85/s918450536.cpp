#include<iostream>
#include<vector>
#define NIL -1
using namespace std;

struct M{
    int r;
    int c;
};

int calc(int s, int e, const vector<M>& M_set,
         vector<vector<int> >& MEMO) {
    if (s == e) return MEMO[s][e] = 0;
    if (MEMO[s][e] != NIL) return MEMO[s][e];
    int min = 1e9;
    for (int split = s; split < e; split++) {
        int val = calc(s, split, M_set, MEMO)
                  + calc(split + 1, e,M_set, MEMO)
                  + M_set[s].r * M_set[split].c * M_set[e].c;
        if (min > val) min = val;
    }
    return MEMO[s][e] = min;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > MEMO(n, vector<int>(n, NIL));
    vector<M> M_set(n);
    for (int i = 0; i < n; i++) {
        cin >> M_set[i].r >> M_set[i].c;
    }
    cout << calc(0, n - 1, M_set, MEMO) << endl;
    return 0;
}