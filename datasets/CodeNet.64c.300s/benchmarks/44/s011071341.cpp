#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <set>
#include <numeric>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <climits>
#include <cfloat>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

void exec()
{
	int dist[11][11]={0};
	int n;
	cin >> n;
	if(n==0){
		exit(0);
	}
	int t=0;
	for(int i=0;i<11;i++){
		for(int j=0;j<11;j++){
			dist[i][j]=1<<29;
		}
		dist[i][i]=0;
	}
	for(int i=0;i<n;i++){
		int a,b,c;
		cin >> a >> b >> c;
		dist[b][a]=dist[a][b]=c;
		t=max(t,a);
		t=max(t,b);
	}
	t++;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			for(int k=0;k<t;k++){
				dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
				//cout << i << " " << j << " " << k << ": " << dist[j][k] << endl;
			}
		}
	}

	int ret=1<<30;
	int town=0;
	for(int i=0;i<t;i++) {
		int sum=0;
		for(int j=0;j<t;j++) {
			sum+=dist[i][j];
		}
		if(sum<ret){
			ret=sum;
			town=i;
		}
	}

	cout << town << " " << ret << endl;

}
int main() {
	while(true)
		exec();

}