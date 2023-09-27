#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

using card = pair<char, int>;

int partition(vector<card>& as, int p, int r, bool& flag) {
    card x = as[r];
    vector<card> right;
    int i = p - 1;
    for (int j = p; j < r; ++j) {
        if (as[j].second <= x.second) {
            i++;
            swap(as[i], as[j]);
        }
        else right.push_back(as[j]);
    }
    swap(as[i + 1], as[r]);
    rep(j, r - i - 1) flag &= (as[i + 2 + j] == right[j]);
    return i + 1;
}

bool quickSort(vector<card>& A, int p, int r) {
    bool flag = true;
    if (p < r) {
        int q = partition(A, p, r, flag);
        flag &= quickSort(A, p, q - 1);
        flag &= quickSort(A, q + 1, r);
    }
    return flag;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<card> deck(n);
    rep(i, n) cin>>deck[i].first>>deck[i].second;
    
    bool ans = true;
    ans = quickSort(deck, 0, n - 1);
    if (ans) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    rep(i, n) cout<<deck[i].first<<" "<<deck[i].second<<endl;
}
