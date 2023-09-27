#include <iostream>
using namespace std;
int map[21][21];
int n,m,a,b,d,cnt;
typedef struct{
	int x;
	int y;
}POS;
POS pos;

void check(char c,int p){
	switch(c){
		case'N':
		for(int i=1;i<=p;i++){
			pos.y++;
			if(map[pos.x][pos.y]==1){
				map[pos.x][pos.y]=0;
				cnt--;
			}
		}
		break;
		case'E':
		for(int i=1;i<=p;i++){
			pos.x++;
			if(map[pos.x][pos.y]==1){
				map[pos.x][pos.y]=0;
				cnt--;
			}
		}
		break;
		case'S':
		for(int i=1;i<=p;i++){
			pos.y--;
			if(map[pos.x][pos.y]==1){
				map[pos.x][pos.y]=0;
				cnt--;
			}
		}
		break;
		case'W':
		for(int i=1;i<=p;i++){
			pos.x--;
			if(map[pos.x][pos.y]==1){
				map[pos.x][pos.y]=0;
				cnt--;
			}
		}
		break;
	}
}



int main(){
	char c;
	while(1){
		cin >>n;
		if(n==0)break;
		for(int i=0;i<=20;i++){
			for(int j=0;j<=20;j++){
				map[i][j]=0;
			}
		}
		for(int i=0;i<n;i++){
			cin >>a >>b;
			map[a][b]=1;
		}
		cin >>m;
		pos.x=pos.y=10;
		cnt=n;
		for(int i=0;i<m;i++){
			cin >>c >>d;
			check(c,d);
		}
		if(cnt==0){
			cout <<"Yes" <<endl;
		}else{
			cout <<"No" <<endl;
		}

	}
	
	return 0;
}