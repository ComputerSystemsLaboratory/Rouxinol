#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    bool A[105][105];
    for(int i=0; i<105; i++){
        for(int j=0; j<105; j++){
            A[i][j] = 0;
        }
    }
    cin >> n;
    for(int i=0; i<n; i++){
        int u;
        int k;
        cin >> u >> k;
        u--;
        for(int j=0; j<k; j++){
            int v;
            cin >> v;
            v--;
            A[u][v] = 1;
        }
        
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cout << A[i][j] << " ";
        }
        cout << A[i][n-1] << endl;
    }
    return 0;
}