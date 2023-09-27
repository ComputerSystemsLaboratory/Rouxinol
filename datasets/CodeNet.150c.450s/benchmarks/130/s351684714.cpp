#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    int B[m];
    int Ans[n];
    
    // Initialize
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
        Ans[i] = 0;
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            Ans[i] += A[i][j] * B[j];
        }
        cout << Ans[i] << endl;
    }
    
    return 0;
}