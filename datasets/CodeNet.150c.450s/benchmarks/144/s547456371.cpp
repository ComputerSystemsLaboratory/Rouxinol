#include<iostream>

using namespace std;

int main(void){

    int n, m, l, i, j, k;

    cin >> n >> m >> l;

     long int a[n][m], b[m][l], c[100][100] = {0};

    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }//?????´??????????????\???

    for(i = 0;i < m;i++){
        for(j = 0;j < l;j++){
            cin >> b[i][j];
        }
    }//?????´??????????????\???

    for(i = 0;i < n;i++){
        for(j = 0;j < l;j++){
            for(k = 0;k < m;k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }//???????????????????????¨????´??????????

    for(i = 0;i < n;i++){
        for(j = 0;j < l;j++){
        if(j != l - 1){cout << c[i][j] << ' ';
        }
        else{cout << c[i][j];
        }
        }
        cout << endl;   
     }

return 0;
}