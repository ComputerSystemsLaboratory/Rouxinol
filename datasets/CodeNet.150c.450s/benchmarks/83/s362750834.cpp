#include <iostream>
using namespace std;

int N, W;
int w[101], v[101];
int DP[101][10001];

int rec(int i, int j)
{
	if(DP[i][j]>=0)
		return DP[i][j];

	if(i==N)
		return DP[i][j] = 0;

	if(j<w[i])
		return DP[i][j] = rec(i+1, j);

	int res1 = rec(i+1, j);
	int res2 = rec(i+1, j-w[i])+v[i];

	if(res1>res2)
		return DP[i][j] = res1;
	else
		return DP[i][j] = res2;

}

int main()
{
	cin >> N >> W;
	for(int i=0; i<N; i++)
		cin >> v[i] >> w[i];

	for(int i=0; i<=N; i++){
		for(int j=0; j<=W; j++){
			DP[i][j] = -1;
		}
	}

	cout << rec(0, W) << endl;
}

