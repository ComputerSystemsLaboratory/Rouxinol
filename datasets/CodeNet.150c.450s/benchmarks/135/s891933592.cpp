#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <stack>
#include <queue>

#define MAX_NM 1500
#define MAX_S 1500*1000

using namespace std;

int N, M;
int h[MAX_NM], w[MAX_NM];
int hsum[MAX_S], wsum[MAX_S];

int main(){
	while(1){
		cin >> N >> M;
		if(N == 0)break;
		for(int i = 0; i < N; i++){
			cin >> h[i];
		}
		for (int i = 0; i < M; i++)
		{
			cin >> w[i];
		}
		for (int i = 0; i < MAX_S; i++)
		{
			hsum[i] = 0;
			wsum[i] = 0;
		}
		for (int i = 0; i < N; i++)
		{
			int s = h[i];
			for (int j = i+1; j <= N; j++)
			{
				hsum[s]++;
				if(j < N) s += h[j];
			}
		}
		for (int i = 0; i < M; i++)
		{
			int s = w[i];
			for (int j = i+1; j <= M; j++)
			{
				wsum[s]++;
				if(j < M) s += w[j];
			}
		}
		int ans = 0;
		for (int i = 0; i < MAX_S; i++)
		{
			ans += hsum[i]*wsum[i];
		}
		cout << ans << endl;
	}
	return 0;
}