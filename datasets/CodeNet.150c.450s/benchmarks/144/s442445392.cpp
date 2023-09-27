#include <iostream>
using namespace std;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;

    int A[n][m], B[m][l];
    long C[n][l];
    
    // A Initialize
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];
    
    //  B Initialize
    for (int i = 0; i < m; i++)
        for (int j = 0; j < l; j++)
            cin >> B[i][j];
    
    
    // C Initialize
    for (int i = 0; i < n; i++)
        for (int j = 0; j < l; j++)
        {
            C[i][j] = 0;
            
            // C Calculation(l = 3, m = 2)
            for (int k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];   
        }
    
    
    // C out
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << C[i][j];
            if (j != l - 1) cout << ' ';
        }
        cout << endl;
    }
    
    return 0;
}