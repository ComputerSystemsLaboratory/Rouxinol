#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[m];

    for (int row=0; row!=n; ++row){
        for (int col=0; col!=m; ++col){
            cin >> a[row][col];
        }
    }

    for (int row=0; row!=m; ++row){
        cin >> b[row];
    }

    for (int row=0; row!=n; ++row){
        int val=0;
        for (int col=0; col!=m; ++col){
            val += a[row][col] * b[col];
        }
        cout << val << endl;
    }
    return 0;
}