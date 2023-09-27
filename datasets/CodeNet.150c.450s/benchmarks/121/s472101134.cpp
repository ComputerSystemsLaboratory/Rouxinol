#include <iostream>
#include <vector>

using namespace std;

const int MAX_H=100,MAX_W=100;

int H,W;
char f[MAX_H][MAX_W+1];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void dfs(int x,int y,char c){
	f[y][x]='_';
	for (int i=0;i<4;i++){
		int a=x+dx[i],b=y+dy[i];
		if (a>=0 && a<W && b>=0 && b<H && f[b][a]==c){
			dfs(a,b,c);
		}
	}
}

int main(){
	vector<int> res;
	do{
		cin>>H>>W;
		if (H!=0 || W!=0){
			for (int i=0;i<H;i++){
				cin>>f[i];
			}
			int cnt=0;
			for (int i=0;i<H;i++){
				for (int j=0;j<W;j++){
					if (f[i][j]!='_'){
						dfs(j,i,f[i][j]);
						cnt++;
					}
				}
			}
			res.push_back(cnt);
		}
	}while (H!=0 || W!=0);
	for (vector<int>::iterator ite=res.begin();ite!=res.end();ite++){
		cout<<*ite<<endl;
	}
	return 0;
}