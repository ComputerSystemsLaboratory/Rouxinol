#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    cin >> N>>M;
    int Mat[N][M];
    int n, m;
    for (n = 0; n<N; n++ ){
        for (m = 0; m<M; m++){
            cin >> Mat[n][m];
        }
    }

    int b[M];
    for (m=0; m<M; m++){
        cin >> b[m];
    }

    int C;
    for (n=0; n<N;n++){
        C=0;
        for (m=0; m<M; m++ ){
            C += Mat[n][m]*b[m];
        }
        cout << C << endl;
    }


}
