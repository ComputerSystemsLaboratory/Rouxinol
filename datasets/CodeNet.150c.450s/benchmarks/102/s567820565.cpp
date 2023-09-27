#include <iostream>
#include <string>
using namespace std;
typedef pair<int,int> P;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
string s[22];
int cnt;
void dfs(int x, int y){
	cnt++;
	s[x][y]='#';
	for(int i=0;i<4;i++){
		if(s[ x+dx[i] ][ y+dy[i] ]!='#') dfs(x+dx[i],y+dy[i]);
	}
}
int main(){
	while(true){
		int w,h,sx,sy;
		cnt=0;
		cin >> w >> h;
		if(!w) break;
		for(int i=1;i<=h;i++){
			cin >> s[i];
			s[i]="#"+s[i]+"#";
		}
		s[0]="";
		s[h+1]="";
		s[0].append(w+2,'#');
		s[h+1].append(w+2,'#');
		for(int i=1;i<h+1;i++){
			for(int j=1;j<w+1;j++){
				if(s[i][j]=='@'){sx=i;sy=j;}
			}
		}
		dfs(sx,sy);
		cout << cnt << endl;
	}
	return 0;
}