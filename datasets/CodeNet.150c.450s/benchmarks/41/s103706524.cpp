#include<stdio.h>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
const int N = 1e5 + 5;
const ll inf = 0x3f3f3f3f3f;
int i, j, n, m;

ll map[115][115];
int a,b,d,p,s,t;

int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++)
	        map[i][j] = inf;
	for (int i = 0; i < n; i++)
	    map[i][i] = 0;
	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (map[a][b] > c) map[a][b] = c;
	}
	for (int k = 0; k < n; k++)
	{
	    for (int i = 0; i < n; i++)
	    {
	    	if (map[i][k] == inf) continue;
	    	for (int j = 0; j < n; j++)
	    	{
	    		if (map[k][j] == inf) continue;
	    		map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
			}
		}
    }
    for (int i = 0; i < n; i++)
        if (map[i][i] < 0)
        {
        	printf("NEGATIVE CYCLE\n");
        	return 0;
		}
    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < n; j++)
    	{
    		if (map[i][j] < inf / 2)
    		    printf("%d", map[i][j]);
    		else printf("INF");
    		if (j != n - 1)
    		printf(" ");
		}printf("\n");
	}
	return 0;
}
