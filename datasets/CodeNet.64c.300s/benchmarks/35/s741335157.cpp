#include <iostream>
using namespace std;
#define MAX 100

int main() {
    int n, idx, g_num, a;
    int G[MAX+1][MAX+1];

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> idx >> g_num;
        for(int j=0; j<=n; j++) {
            G[idx][j] = 0;
        }
        for(int j=0; j<g_num; j++) {
            cin >> a;
            G[idx][a] = 1;
        }   
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << G[i][j];
            if(j!=n) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
