#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const ll INF = 1LL<<32;;
int n,m;
ll dis[300][300];
int main()
{
    cin >> n >> m;
        int i,j,k;
        for(i = 0;i < n;i++)
            for(j = 0;j < n;j++)
			{
				if(i == j)
					dis[i][j] = 0;
				else
                    dis[i][j] = INF;
			}
        while(m--)
        {
            int a,b,c;
            cin >> a >> b >> c;
			dis[a][b] = c;
        }
        for(k = 0 ; k<n ; k++){
        for(i = 0 ; i<n ; i++){
            if(dis[i][k] == INF)
                continue;
            for(j = 0 ; j<n ; j++){
                if(dis[k][j] == INF)
                    continue;
                dis[i][j] = min(dis[i][j] , dis[i][k]+dis[k][j]);
            }
        }
    }
    bool flag = 0;
    for( i = 0 ; i<n ; i++)
    {
        if(dis[i][i] < 0)
        {
            flag = 1;
            break;
        }
    }
        if(flag == 1)
            cout << "NEGATIVE CYCLE" << endl;
        else
        {
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                if(j == n-1)
                {
                    if(dis[i][j] == INF)
                        cout << "INF";
                    else
                        cout << dis[i][j];
                }
                else
                {
                    if(dis[i][j] == INF)
                        cout << "INF ";
                    else
                        cout << dis[i][j] << ' ';
                }
            }
            cout << endl;
        }
        }
    return 0;
}

