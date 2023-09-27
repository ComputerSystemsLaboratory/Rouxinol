#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n && n)
    {
        int m;
        cin >> m;
        int h[n], w[m];
        int p[n+1], q[m+1]; //h[0]+...+h[i]??????????????????????¨????????????????
        p[0] = 0;
        q[0] = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> h[i];
            p[i+1] = p[i] + h[i];
            
        }
        for(int j = 0; j < m; j++)
        {
            cin >> w[j];
            q[j+1] = q[j] + w[j];
        }
        int t = 0;
        int x[(n+1)*(m+1)+1];
        x[(n+1)*(m+1)] = 0;
        for(int k = 0; k < n+1; k++)
        {
            for(int l = 0; l < m+1; l++)
            {
                x[t] = p[k] + q[l];
                t = t + 1;
            }
        }
        sort(x, x+(n+1)*(m+1));
        int c = 1;
        int d = 0;
        for(int a = 1; a < (n+1)*(m+1)+1; a++)
        {
            if(x[a] == x[a-1])
            {
                c = c + 1;
            }
            else
            {
                d = d + c*(c-1)/2;
                c = 1;
            }
        }
        cout << d << endl;
        
    
    
    
    }



}