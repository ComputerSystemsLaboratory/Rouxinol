#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int matrix[100][100];
    int b[100];
    int ans[100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < m; i++) cin >> b[i];
    for(int i = 0; i < n; i++){
        ans[i] = 0;
        for(int j = 0; j < m; j++){
            ans[i] += matrix[i][j] * b[j];
        }
    }
    for(int k =0; k < n; k++){
        cout << ans[k] << endl;
    }
    return 0;
}
