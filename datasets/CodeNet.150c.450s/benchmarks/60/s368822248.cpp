#include <iostream>
#include <set>
using namespace std;
static const int N = 100;

int n;

set<int> G[100];

int main(int argc, char const *argv[])
{
    int k, u, g;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k >> u;
        for (int j = 0; j < u; j++) {
            cin >> g;
            G[i].insert(g);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!G[i].empty()) {
                cout << ((j==0) ? "" : " ");
                cout << ((G[i].find(j+1) != G[i].end()) ? "1" : "0");
            } else {
                cout << ((j==0) ? "" : " ");
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}

