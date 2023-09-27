#include <bits/stdc++.h>
using namespace std;

int main(void)
{
     //??£??\??????????????£??\???????????????
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

    vector<int> u(n, 1000000);
    u[0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(u[j] == i){
                for(int k = 0; k < n; k++){
                    if(A[j][k] == 1) u[k] = min(i+1, u[k]);
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(u[i] != 1000000) cout << i + 1 << " " << u[i] << endl;
        else cout << i + 1 << " " << "-1" << endl;
    }
    return 0;

}