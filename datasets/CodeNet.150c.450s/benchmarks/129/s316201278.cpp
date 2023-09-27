#include<iostream>

using namespace std;

int main(void){

    int r, c;

    cin >> r >> c;

    int a[101][101] = {0};

    int i, j, b;

    for(i = 0;i < r;i++){

        for(j = 0;j < c + 1;j++){

            if(j != c){ 
                
                cin >> a[i][j];
                
                a[i][c] = a[i][c] + a[i][j];

                a[r][j] = a[r][j] + a[i][j];
                
                cout << a[i][j] << ' ';

            }

            if(j == c) cout << a[i][c];

        }

        cout << endl;

    }

    for(j = 0;j < c + 1;j++){

        if(j != c)cout << a[r][j] << ' ';

        else{cout << a[r][j];
        
        }

        a[r][c] = a[r][c] + a[r][j];

    }

    cout << endl;

return 0;

}