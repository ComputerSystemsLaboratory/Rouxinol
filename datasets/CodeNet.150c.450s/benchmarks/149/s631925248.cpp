#include<iostream>
#include<vector>
using namespace std;

int findSet(int x, vector<int>& Forest){
    if (Forest[x] == x) return x;
    return Forest[x] = findSet(Forest[x], Forest);
}

void unite(int x, int y, vector<int>& Forest, vector<int>& rank){
    int x_ = findSet(x, Forest);
    int y_ = findSet(y, Forest);
    if (rank[x_] == rank[y_]) {
        Forest[y_] = x_;
        rank[x_]++;
        return;
    }
    if (rank[x_] > rank[y_]) {
        Forest[y_] = x_;
    } else {
        Forest[x_] = y_;
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> Forest(n);
    for (int i = 0; i < n; i++) {
        Forest[i] = i;
    }
    vector<int> rank(n, 0);
    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            unite(x, y, Forest, rank);
        } else {
            cout << (findSet(x, Forest) == findSet(y, Forest)) << endl;
        }
    }
    return 0;
}

