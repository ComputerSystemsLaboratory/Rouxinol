#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>

using namespace std;

#define INF 999999999
#define REP(i,n) for(int i=0; i<(int)(n); i++)

int main(){
	int H;
	vector <int> p[5];
	int ans, ins;
	
	while(1){
		cin >> H;
		if(!H) break;
		ans = 0;
		REP(i,5) p[i].clear();
		REP(i,H){
			REP(j,5){
				cin >> ins;
				p[j].insert(p[j].begin(), 1, ins);
			}
		}
		int flag=1;
		while(flag){
			flag = 0;
			for(int i=p[2].size()-1;i>=0;i--){
				if(p[2][i]==p[0][i]&&p[2][i]==p[1][i]&&p[2][i]==p[3][i]&&p[2][i]==p[4][i]){
					flag++;
					ans += p[2][i] * 5;
					for(int j=0;j<5;j++)p[j].erase(p[j].begin()+i);
				}
				else if(p[2][i]==p[1][i]&&p[2][i]==p[3][i]&&p[2][i]==p[4][i]){
					flag++;
					ans += p[2][i] * 4;
					for(int j=1;j<5;j++)p[j].erase(p[j].begin()+i);
				}
				else if(p[2][i]==p[0][i]&&p[2][i]==p[1][i]&&p[2][i]==p[3][i]){
					flag++;
					ans += p[2][i] * 4;
					for(int j=0;j<4;j++)p[j].erase(p[j].begin()+i);
				}
				else if(p[2][i]==p[0][i]&&p[2][i]==p[1][i]){
					flag++;
					ans += p[2][i] * 3;
					for(int j=0;j<3;j++)p[j].erase(p[j].begin()+i);
				}
				else if(p[2][i]==p[1][i]&&p[2][i]==p[3][i]){
					flag++;
					ans += p[2][i] * 3;
					for(int j=1;j<4;j++)p[j].erase(p[j].begin()+i);
				}
				else if(p[2][i]==p[3][i]&&p[2][i]==p[4][i]){
					flag++;
					ans += p[2][i] * 3;
					for(int j=2;j<5;j++)p[j].erase(p[j].begin()+i);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}