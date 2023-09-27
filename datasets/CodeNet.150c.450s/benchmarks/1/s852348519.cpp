#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

const int MAX_N = 100000;
const int INF = 1000000001;

int DP[MAX_N];
int a[MAX_N];

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	fill(DP,DP+n,INF);
	for(int i=0;i<n;i++){
		*lower_bound(DP,DP+n,a[i]) = a[i];
	}
	int i=0;
	while(DP[i] != INF){
		i++;
		if(i == n){
			break;
		}
	}
	cout << i << "\n";
}