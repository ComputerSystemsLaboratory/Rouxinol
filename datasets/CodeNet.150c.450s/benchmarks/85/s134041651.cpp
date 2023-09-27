#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const int MAX_N = 100;
const long long INF = 10000000000000;

long long DP[MAX_N][MAX_N];
pair<int,int> P[MAX_N];

int main()
{
	int n;
	long long q;
	cin >> n;
	for(int i=0;i<n;i++){
		scanf("%d",&P[i].first);
		scanf("%d",&P[i].second);
	}
	fill(DP[0],DP[n],INF);
	for(int i=0;i<n;i++){
		DP[i][i] = 0;
	}
	for(int l=1;l<n;l++){
		for(int i=0;i<n-l;i++){
			for(int k=i;k<i+l;k++){
				q = DP[i][k] + DP[k+1][i+l] + P[k].second * P[i].first * P[i+l].second;
				if(q < DP[i][i+l]){
					DP[i][i+l] = q;
				}
			}
		}
	}
	cout << DP[0][n-1] << "\n";
}