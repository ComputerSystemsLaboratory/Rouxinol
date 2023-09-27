#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
struct ST{
	int a;
	int b;
	int c;
	int d;
};
int map[1001][1001];
int check[1001][1001];
int q[4]={1,0,-1,0};
int p[4]={0,-1,0,1};
int main(){
	queue <ST> Q;
	ST x;
	ST y;
	int h,w,n;
	int i,j,m;
	char s;
	memset(map,0,sizeof(map));
	memset(check,0,sizeof(check));
	char num[10]={'0','1','2','3','4','5','6','7','8','9'};
	cin>>h>>w>>n;
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			cin>>s;
			if(s=='S'){
				x.a=i;
				x.b=j;
				x.c=0;
				x.d=1;
				Q.push(x);
			}
			else if(s=='X'){
				map[i][j]=-1;
			}
			else{
				for(m=1;m<10;m++){
					if(s==num[m]){
						map[i][j]=m;
					}
				}
			}
		}
	}
	/*for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			cout<<map[i][j];
		}
		cout<<endl;
	}*/
	while(!Q.empty()){
		y=Q.front();
		Q.pop();
		if(check[y.a][y.b]==1)continue;
		check[y.a][y.b]=1;
		if(y.d==map[y.a][y.b]){
			if(n==y.d){
				cout<<y.c<<endl;
				break;
			}
			while(!Q.empty()){
				Q.pop();
			}
			y.d++;
			x=y;
			Q.push(x);
			memset(check,0,sizeof(check));
			continue;
		}
		for(i=0;i<4;i++){
			if(y.a+q[i]>=0&&y.b+p[i]>=0&&y.a+q[i]<h&&y.b+p[i]<w&&map[y.a+q[i]][y.b+p[i]]!=-1&&check[y.a+q[i]][y.b+p[i]]==0){
				x.a=y.a+q[i];
				x.b=y.b+p[i];
				x.c=y.c+1;
				Q.push(x);
			}
		}
	}
	return 0;
}