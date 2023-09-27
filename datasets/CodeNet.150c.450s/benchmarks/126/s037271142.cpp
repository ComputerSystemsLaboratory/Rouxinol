#include <iostream>
using namespace std;

int map[16][16]={0},memo[16][16]={0};
int root(int x,int y){
	if(memo[x][y]==0){
		int number=0;
		if(x==0&&y==0)return 1;
		if(x!=0&&map[x-1][y]!=-1)number+=root(x-1,y);
		if(y!=0&&map[x][y-1]!=-1)number+=root(x,y-1);
		memo[x][y]=number;
		return number;
	}
	else return memo[x][y];
}
int main() {
	int a,b,n,x,y;
	while(1){
		cin >> a >> b;
		if(a==0&&b==0)break;
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			map[x-1][y-1]=-1;
		}
		cout << root(a-1,b-1) << endl;
		for(int i=0;i<16;i++){
			for(int j=0;j<16;j++){
				map[i][j]=0;
				memo[i][j]=0;
			}
		}
	}
	return 0;
}