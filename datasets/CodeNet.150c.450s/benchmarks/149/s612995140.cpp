#include<iostream>
#include<vector>
using namespace std;

class Disjoint{
private:
    vector<int> S;
    vector<int> rank;
    int find(int x){
        if (x == S[x]) {
            return x;
        }
        return x = find(S[x]);
    }
public:
    Disjoint(int n) {
        for (int i = 0; i < n; i++) {
            S.push_back(i);
            rank.push_back(0);
        }
    }
    void unite(int x, int y){
        int x_p = find(x);
        int y_p = find(y);
        if (rank[x_p] == rank[y_p]) {
            S[x_p] = y_p;
            rank[y_p]++;
            return;
        }
        if (rank[x_p] < rank[y_p]) {
            S[x_p] = y_p;
        } else {
            S[y_p] = x_p;
        }
    }
    bool same(int x, int y){
        return find(x) == find(y);
    }
};

int main(){
    int n, q;
    cin >> n >> q;
    Disjoint D(n);

    for (int i = 0; i < q; i++) {
        int command, x, y;
        cin >> command >> x >> y;
        if (command == 0) {
            D.unite(x, y);
        } else {
            cout << D.same(x, y) << endl;
        }
    }

    return 0;
}