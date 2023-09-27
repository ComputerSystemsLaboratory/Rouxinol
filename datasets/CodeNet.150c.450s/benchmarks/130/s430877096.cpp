#include<iostream>
using namespace std;
int main(){
    int matrix[100][100] = {{}};
    int vector[100]={};
    int n, m, i, j, total;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> matrix[i][j];
        }
    }
    for(i=0;i<m;i++) cin >> vector[i];
    for(i=0;i<n;i++){
        total = 0;
        for(j=0;j<m;j++) total += matrix[i][j]*vector[j];
        cout << total << endl;
    }
    return 0;
}
