#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int matrix[n][m], vector[m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    for(int i = 0; i < m; i++) cin >> vector[i];

    for(int i = 0; i < n; i++){
        int item = 0;
        for(int j = 0; j < m; j++) item += matrix[i][j] * vector[j];
        cout << item << endl;
    }
    return 0;
}
