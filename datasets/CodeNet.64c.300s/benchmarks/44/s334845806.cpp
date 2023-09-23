#include <iostream>
#include <algorithm>

#define INF 1000000

using namespace std;

int main(void){
	int n;
	while(cin >> n && n){
		int f[10][10];
		fill((int*)f, (int*)f+10*10, INF);
		int s,t,cost;
		int maxi=0;
		for(int i=0;i<n;i++){
			cin >> s >> t >> cost;
			maxi = max(max(maxi,s),t);
			f[s][t] = cost;
			f[t][s] = cost;
		}
		for(int i=0;i<=maxi;i++) f[i][i] = 0;
		//WF
		for(int k=0;k<=maxi;k++){
			for(int i=0;i<=maxi;i++){
				for(int j=0;j<=maxi;j++){
					f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
				}
			}
		}
		int tmp,index;
		int ret = INF;
		for(int i=0;i<=maxi;i++){
			tmp = 0;
			for(int j=0;j<=maxi;j++){
				tmp += f[i][j];
			}
			if(tmp < ret){
				ret = tmp;
				index = i;
			}
		}
		cout << index << " " << ret << endl;
	}
}