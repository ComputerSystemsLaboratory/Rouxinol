
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int G[n][n];
    for (int i =0; i<n; i++) {
        for (int j =0; j<n; j++) {
            G[i][j] = 0;
        }
    }
    for (int i=0;i<n;i++) {
        int p,m;
        cin >>p >> m;
        for (int j=0; j<m; j++) {
            int q;
            cin >> q;
            G[p-1][q-1]=1;
        }
    }
    for (int i =0; i<n; i++) {
        for (int j =0; j<n; j++) {
            cout << G[i][j];
            if(j!=n-1) cout << " ";
        }
        cout << endl;
    }

}