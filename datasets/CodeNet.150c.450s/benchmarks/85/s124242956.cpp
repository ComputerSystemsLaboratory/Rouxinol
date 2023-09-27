#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> p(n + 1);

    rep(i, n)
    {
        cin >> p[i] >> a;
    }
    p[n] = a;
    //cout<<"in end"<<endl;

    vector <vector <int> > m(n, vector<int>(n));

    for (int l = 0; l < n; l++)
    {
        for (int i = 0; i < n; i++)
        {
            int j = i + l;
            if(j>=n)break;
            if (i == j) m[i][j] = 0;
            else
            {   
                m[i][j]=m[i][i]+m[i+1][j]+p[i]*p[i+1]*p[j+1];
                for (int k = i;k < j;k++){
                    m[i][j]=min(m[i][k] + m[k+1][j] + p[i] * p[k + 1] * p[j + 1],m[i][j]);
                }
            }
        }
    }

    cout<<m[0][n-1]<<endl;
}
