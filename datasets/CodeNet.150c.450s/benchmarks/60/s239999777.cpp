#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n, k;

    cin >> n;
    vector<vector<bool> > A(n, vector<bool>(n, false));
    for(int i = 0; i < n; i++){
        cin >> k >> k;
        for(int j = 0; j < k; j++){
            int input;
            cin >> input;
            A[i][input-1] = true;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != n-1) cout << A[i][j] << " ";
            else cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}