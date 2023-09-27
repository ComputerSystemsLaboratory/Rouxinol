#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
long long  cheese[1001][1001];
long long  check[1001][1001];
char num[11]={'0','1','2','3','4','5','6','7','8','9'};
int q[4]={0,1,0,-1};
int p[4]={1,0,-1,0};
struct ST {
	int a;
	int b;
	int c;
	int d;
};
int main(){
	memset(cheese,0,sizeof(cheese));
	memset(check,0,sizeof(check));
	int h,w,n;
	int i,j,m;
	int ys,xs;
	char data;
	queue <ST> Q;
	ST x;
	ST y;
	cin>>h>>w>>n;//??¢??????????????°
	for(i=1;i<=h;i++){
		for(j=1;j<=w;j++){
			cin>>data;
			if(data=='S'){//????????????
				ys=i;//??????????????§?¨?
				xs=j;
			}
			else if(data=='X'){//?????????
				cheese[i][j]=-1;
			}
			else if(data!='.'){
				for(m=1;m<=9;m++){
					if(num[m]==data){
						cheese[i][j]=m;
					}
				}
			}
		}
	}
	x.a=ys;
	x.b=xs;
	x.c=0;
	x.d=1;
	Q.push(x);
	while(!Q.empty()){
		y=Q.front();
		Q.pop();
		if(check[y.a][y.b]==1)continue;
		check[y.a][y.b]=1;
		if(y.d==cheese[y.a][y.b]){
			if(n==y.d) break;
			memset(check,0,sizeof(check));
			while(!Q.empty()){
				Q.pop();
			}
			y.d+=1;
			x.a=y.a;
			x.b=y.b;
			x.c=y.c;
			x.d=y.d;
			Q.push(x);
			continue;
		}
		for(i=0;i<4;i++){
			if(y.a+q[i]>0&&y.a+q[i]<=h&&y.b+p[i]>0&&y.b+p[i]<=w&&check[y.a+q[i]][y.b+p[i]]!=1&&cheese[y.a][y.b]!=-1){
				x.a=y.a+q[i];
				x.b=y.b+p[i];
				x.c=y.c+1;
				x.d=y.d;
				Q.push(x);
			}
		}
	}
	cout<<y.c<<endl;
	return 0;
}