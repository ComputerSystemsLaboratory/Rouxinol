#include <iostream>

using namespace std;

int main(){
        int n,m,l;
        unsigned long sum = 0;

        cin >> n >> m >> l;

        int det_1[100][100];
        int det_2[100][100];

        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++)
                        cin >> det_1[i][j];
        }       

        for(int i = 0; i < m; i++){
                for(int j = 0; j < l; j++)
                        cin >> det_2[i][j];
        }

        for(int k = 0; k < n; k++){
                for(int p = 0; p < l; p++){
                        for(int q = 0; q < m; q++){
                                sum += (det_1[k][q] * det_2[q][p]);
                        }

                        cout << sum;
                        if(p != (l-1)) cout << " ";                             
                        sum = 0;
                }
                cout << "\n";
        }
        return 0;
}