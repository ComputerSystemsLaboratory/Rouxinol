#include <iostream>
using namespace std;

int main() {
    int T[50000];
    int coin[20];
    int n;
    int m;
    int INF = 99999;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
        cin >> coin[i];

    for (int j = 0; j <= n; j++)
        T[j] = INF;

    T[0] = 0;


    for (int i = 0; i <= n; i++){
        T[i] = i;
    }

    //for (int i = 0; i <= n; i++){
    //    T[0][i] = 0;
    //}

    //show
    //for (int i = 0; i <= m; i++){
    //   for (int j = 0; j <=n; j++){
    //        // cout << T[i][j] << "," ;
    //        cout << "T " << "( " << i << " " << j << " )"   << "," ;
    //   }
    //    cout << endl;
    //}

    //cout << "---------------------------------------" << endl;

    for (int i = 2; i <= m; i++){
       for (int j = 1; j <= n; j++){
           if (j-coin[i-1] < 0) T[j] = T[j];
           else {T[j] = min(T[j], T[j-coin[i-1]] + 1);}
      }
    }

    //for (int i = 0; i < m; i++){
    //   for (int j = 0; j <n; j++){
    //         cout << T[j] << "," ;
    ////        cout << T[i][j] << "( " << i << " " << j << " )"   << "," ;
    //   }
    //    cout << endl;
    //}

    cout << T[n] << endl;
    return 0;
}