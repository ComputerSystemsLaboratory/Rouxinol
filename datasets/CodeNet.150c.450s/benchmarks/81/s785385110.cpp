#include <iostream>
using namespace std;


#define INF 10000
#define MAX_V 10


int d[MAX_V][MAX_V];
int n, m, a, b, c, num, t;


void Init(){
	t=INF; m=0;//ツ陳ャツづ個青板。
	for(int i=0; i<MAX_V; i++)
			for(int j=0; j<MAX_V; j++)
				i==j ? d[i][j]=0 : d[i][j]=INF;
}


void Input(){
	for(int i=0; i<n; i++){
		cin>>a>>b>>c;
		m = max(a, max(b, m));//ツ陳ャツづ個青板。
		d[a][b]=d[b][a]=c;
	}
}


void wf(){	
	int tmp = 0;
	for(int k=0; k<=m; k++)
		for(int i=0; i<=m; i++)
			for(int j=0; j<=m; j++)
				d[i][j]=min(d[i][j], d[i][k]+d[k][j]);



	for(int i=0; i<=m; i++){
		for(int j=0; j<=m; j++){
			if(d[i][j]!=INF || i!=j)tmp+=d[i][j];
		}
		if(tmp<t)t=tmp, num=i;
		tmp=0;
	}
	return;
}



int main(){
	while(cin>>n, n){
		Init();
		Input();
		wf();
		printf("%d %d\n", num, t);
	}
	return 0;
}