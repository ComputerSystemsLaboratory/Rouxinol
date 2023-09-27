#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int N,M;
    // cin >> N>>M;
    // int Mat[N][M];
    int r, c;
    cin >> r >> c;
    int RC[r+1][c+1];
    for (int i =0; i < r;i++){
        for (int j = 0; j < c; j++){
            cin >> RC[i][j];
        }
    }
    int sum;
    for (int i =0; i < r;i++){
        sum =0;
        for (int j = 0; j < c; j++){
            sum+=RC[i][j];
            cout << RC[i][j] << " ";
        }
        RC[i][c]=sum;
        cout << RC[i][c] <<endl;
    }

    for (int i =0; i < c+1;i++){
        sum =0;
        for (int j = 0; j < r; j++){
            sum+=RC[j][i];
        }
        RC[r][i]=sum;
        if (i != c){
            cout << RC[r][i] << " ";
        }else{
            cout << RC[r][i]<<endl;
        }
    }

    return 0;
}
