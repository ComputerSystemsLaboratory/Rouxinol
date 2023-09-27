
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int P[1010];
int cost[5000];
int src[5000];	
int dst[5000];
int A[100 + 10][100 + 10];
int M = 0;
vector< pair<int,int> > edges;

void init(int N)
{
    for(int i = 1; i <= N; ++i)
    {
        P[i] = i;
    }
}
 
int root(int a)
{
    if(P[a] == a)
    {
        return a;
    }
    return (P[a] = root(P[a]));
}
 
bool is_same_set(int a, int b)
{
    return root(a) == root(b);
}
 
void unite(int a, int b)
{
    P[root(a)] = root(b);
}

int main()
{
	int n = 0;
	cin >> n; 
	for(int r = 0; r < n; ++r)
	{
		for(int c = 0; c < n; ++c)
		{
			cin >> A[r][c];
		}
	}
	for (int r = 0; r < n; ++r)
	{
		for(int c = r + 1; c < n; ++c)
		{
			if(A[r][c] > -1)
			{
				cost[M] = A[r][c];
				src[M] = r;
				dst[M] = c;
				edges.push_back(make_pair(cost[M],M));
				M += 1;
			}
		}
	}
	sort(edges.begin(),edges.end());
	int sum = 0;
	init(n);
	for(int i = 0; i < M; ++i)
	{
		if(is_same_set(src[edges[i].second], dst[edges[i].second]) == 1) continue;
			unite(dst[edges[i].second],src[edges[i].second]);
			sum += edges[i].first;
	}
	cout << sum << endl;
}