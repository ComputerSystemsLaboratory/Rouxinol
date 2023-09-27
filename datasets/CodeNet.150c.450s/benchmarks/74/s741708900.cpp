#include <iostream>
using namespace std;
#define MMAX 20
#define NMAX 50000
#define INFTY (1<<29)

int n, m;
int C[21];
int T[NMAX+1];
int getmin()
{
    for(int j=0; j<=n; j++)
        T[j] = INFTY;
    T[0] = 0;
    for(int i=0; i<=m; i++)
    {
        for(int j=C[i]; j<=n; j++)
            T[j] = min(T[j], T[j-C[i]]+1);
    }
    return T[n];
}
int main()
{
    cin >> n >> m;
    for(int i=1; i<=m; i++)
        cin >> C[i];
    cout << getmin() << endl;
    return 0;
}