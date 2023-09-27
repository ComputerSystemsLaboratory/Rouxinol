#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    int A[n][m];
    int b[m][1];
    int c[n][1];

    int i,j;

    for(i=0;i<n;i++){
        c[i][0] = 0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> A[i][j];
        }
    }

    for(i=0;i<m;i++){
        cin >> b[i][0];
    }    

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][0] += A[i][j] * b[j][0];
        }
    }
        
    for(i=0;i<n;i++){
        cout << c[i][0] << endl;
    }

    return 0;
}
