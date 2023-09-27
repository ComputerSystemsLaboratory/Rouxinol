//AOJ0118
/*样本输入
10 10
#### ***** @
@＃@ @ @ @ @ ####
@ ## *** @@@ *
＃****＃* @ **
## @ *＃@ @ * ##
* @ @ @ @ @ @ @ @ @ @ @＃
***＃@ * @ ## *
* @ @ @ @ @ @ @ @ @ ## @
* @ *＃* @ ## **
@ ****＃@ @＃@
0 0
样本输入的输出
33*/
#include <iostream>
using namespace std;
int n,m;
char map[100][100];
const int der[4][2]={
	{0,-1},
	{1,0},
	{0,1},
	{-1,0},
};
void dfs(const int& x,const int& y,const char cnm){
	map[x][y]='x';
	for(int i=0;i<4;i++){
			int xx=x+der[i][1];
			int yy=y+der[i][0];
			if(0<=xx&&xx<n&&0<=yy&&yy<m&&map[xx][yy]==cnm){
				dfs(xx,yy,cnm);
			}	
		}
}
int main(){
	ios::sync_with_stdio(false);
	while(cin>>n>>m,m>0){
		int ans=0;
		int j,i;
	for( i=0;i<n;i++){
		for( j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	for( i=0;i<n;i++){
		for( j=0;j<m;j++){
			if(map[i][j]!='x'){
				dfs(i,j,map[i][j]);
				++ans;
			}
		}
	}
	cout<<ans<<endl;
}
return 0;
}
