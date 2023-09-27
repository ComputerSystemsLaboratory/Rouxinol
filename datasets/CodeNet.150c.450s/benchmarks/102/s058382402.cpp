#include <iostream>
#include <queue>
#include <utility>

const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};

int a,b,ans;
int q[20+5][20+5];
char p[20+5][20+5];

using namespace std;
int main() {
	queue<pair<int,int> > M;
	pair<int,int> X;
	while(cin >> a >> b){
		for (int i=1; i<=21; i++){
			for (int j=1; j<=21; j++){
				q[i][j] = 0;
				p[i][j] = ' ';
			}
		}
		if (a==0) return 0;
		ans = 0;
		for (int i=1; i<=b; i++){
			for (int j=1; j<=a; j++){
				cin >> p[i][j];
				if (p[i][j] == '@'){
					M.push(make_pair(i,j));
					ans = 1;
					q[i][j] = 1;
				}
			}
		}
	

		while(!M.empty()){
			a = M.front().first;
			b = M.front().second;
			M.pop();
			for (int i=0; i<=3; i++){		
				if (p[a+dx[i]][b+dy[i]]=='.' && q[a+dx[i]][b+dy[i]]==0){
					M.push(make_pair(a+dx[i],b+dy[i]));
					q[a+dx[i]][b+dy[i]] = 1;
					ans+=1;
				}
			}
		}
		cout << ans << endl;
	}
}