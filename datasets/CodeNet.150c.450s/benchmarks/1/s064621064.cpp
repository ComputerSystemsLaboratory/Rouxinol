#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000

int main()
{
    int n,m;cin >> n;
    vector<int> LIS(n+2,INF);
    for (int i=0;i<n;i++)
    {
        cin >> m;
        *lower_bound(LIS.begin(),LIS.end(),m)=m;
    }
    for (int i=0;i<n+1;i++)
    {
        if (LIS[i]==INF)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
