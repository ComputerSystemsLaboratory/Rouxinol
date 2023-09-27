#include <iostream>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)

using namespace std;

struct Node {
    long key = 0;
};

int main() {
    int n;
    cin >> n; 
    Node N[500] = {};
    rep(i,n) {
        long tmp;
        cin >> tmp;
        N[i+1].key = tmp;
    }
    rep(i,n) {
        cout << "node " << i+1 << ": key = " << N[i+1].key << ", ";
        if(N[(i+1)/2].key != 0) {
            cout << "parent key = " << N[(i+1)/2].key << ", ";
        }
        if(N[2*(i+1)].key != 0) {
            cout << "left key = " << N[2*(i+1)].key << ", ";
        }
        if(N[2*(i+1)+1].key != 0) {
            cout << "right key = " << N[2*(i+1)+1].key << ", ";
        }
        cout << endl;
    }
	return 0;
}