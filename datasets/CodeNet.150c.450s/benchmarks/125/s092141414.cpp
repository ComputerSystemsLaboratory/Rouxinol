#include <bits/stdc++.h>

using namespace std;
int t;

void dfs(vector<vector<bool> >& A, vector<vector<int> >& B, int s, int n, vector<int> & u){
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(B[s][1] == 0){
                B[s][1] = t;
                t++;
            }
        }
        if(A[s][i] == true){
            A[s][i] = false;
            if(u[i] == 0){
                u[i] = 1;
                dfs(A, B, i, n, u);
            }
        }
        if(i == n-1){
            if(B[s][2] == 0){
                B[s][2] = t;
                t++;
            }
        }
    }
}

int main(void){

    //??£??\??????????????£??\???????????????
    int n, k;

    cin >> n;
    vector<vector<bool> > A(n, vector<bool>(n, false));
    vector<int> u(n, 0);
    u[0] = 1;
    for(int i = 0; i < n; i++){
        cin >> k >> k;
        for(int j = 0; j < k; j++){
            int input;
            cin >> input;
            A[i][input-1] = true;
        }
    }

   

    vector<vector<int> > B(n, vector<int>(3, false));
    for(int i = 0; i < n; i++){
        B[i][0] = i + 1;
    }

    t = 1;
    for(int k = 0; k < n; k++){
        if(B[k][1] == 0) dfs(A, B, k, n, u);
    }
    

    //??????
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            if(j != 2) cout << B[i][j] << " ";
            else cout << B[i][j];
        }
        cout << endl;
    }
    return 0;
}