#include <iostream>

using namespace std;

int main(){
        int A[101][101] = {};
        int B[101] = {};
        int n,m;
        int c = 0;

        cin >> n >> m;

        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                        cin >> A[i][j];
                }
        }

        
        for(int i = 1; i <= m; i++){
                cin >> B[i];
        }


        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                        c += (A[i][j] * B[j]);
                }       
                cout << c << "\n";
                c = 0;
        }

        return 0;
}