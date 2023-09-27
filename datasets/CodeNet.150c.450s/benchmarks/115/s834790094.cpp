#include <iostream> 
#include <cstring> 
using namespace std;
int c[1001][1001];

int lcs(string x, string y)
{
    int maxl = 0;
    int m = x.length(), n = y.length();
 
    for (int i = 0; i <= m; i++) c[i][0] = 0;
    for (int j = 0; j <= n; j++) c[0][j] = 0;


    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i-1] == y[j-1])
            { 
                // if(i==0 || j==0) c[i][j] = 1;
                c[i][j] = c[i-1][j-1] + 1; 
            }else
            {
                // if(i==0 || j==0) c[i][j] = 0;
                c[i][j] = max(c[i][j-1], c[i-1][j]);
            }
            maxl = max(maxl, c[i][j]);
        } 
    } 
    // printf("%d\n", c[m][n]);
    return c[m][n];
}

int main()
{
    string x,y;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        int ans = lcs(x, y);
        cout<<ans<<endl;
    }
    return 0;
}