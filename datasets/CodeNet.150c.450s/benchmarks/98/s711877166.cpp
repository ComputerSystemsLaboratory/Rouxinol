#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
    {
    int m;
    cin >> m;
    int t[n], h[m]; 
    int p, q;
    p = 0;
    q = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
        p = p + t[i];
    }
    for(int j = 0; j < m; j++)
    {
        cin >> h[j];
        q = q + h[j];
    }
    int x = 0; 
    for(int k = 0; k < n; k++) 
    {
        if(x == 0)
        {
            for(int l = 0; l < m; l++)
            {
                if(p-t[k]+h[l] == q+t[k]-h[l])
                {
                    x = 1;
                    cout << t[k] << " " << h[l] << endl;
                    break;
                }
            }
        }
    }
    if(x == 0)
    {
        cout << -1 << endl;
    }
    }
}