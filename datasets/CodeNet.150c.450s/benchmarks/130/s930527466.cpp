#include<iostream>

using namespace std;

int main(void){

    int n, m, i, j;

    cin >> n >> m;

    int a[n][m], b[m], c[n];

    for(i = 0;i < n;i++){

        for(j = 0;j < m;j++){

            cin >> a[i][j];

        }
    }//???????????\???

    for(j = 0;j < m;j++){

        cin >> b[j];

    }//?????????????????\???

    for(i = 0;i < n;i++){

        for(j = 0;j < m;j++){

            if(j == 0) c[i] = a[i][0] * b[0];
            else{c[i] = c[i] + a[i][j] * b[j];
            }

        } 
    }

    for(i = 0;i < n ;i++){

        cout << c[i] << endl;

    }

return 0;

}