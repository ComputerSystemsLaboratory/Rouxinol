#include<iostream>
using namespace std;
#include<queue>
#include<vector>
#include<string>
#include<string.h>
#include<algorithm>
bool b[2003];

#define REP(i, a) for(int i=0;i<a;i++)

int main()
{
	int min,b,a,m[101][101],n ,e,p[101],d[101],u,v; //u ?????????v????????¨
	bool color[101];
	cin>>n;
	REP(i, n) {
		REP(j, n) {
			cin>>m[i][j];
			if(m[i][j]==-1) m[i][j]=2001;
		}
		color[i]=0;
		d[i]=2001;
		p[i]=2001;
	}
	a=0;
	d[0]=0;
	while(1){
		min=2001;
		u=-1;
		REP(i,n){
			if(min>d[i]&&color[i]==0){
				min=d[i];
				u=i;
			}
		}
		if(u==-1) break;
		color[u]=1;
		REP(i,n){
			if(color[i]==0&&m[u][i]!=2001){
				if(d[i]>m[u][i]){
					d[i]=m[u][i];
					p[i]=u;
				}
			}
		}

	}
	min=0;
	REP(i,n){
		if(p[i]!=2001){
		min=min+m[i][p[i]];
		}
	}
	cout<<min<<endl;
	return 0;
}