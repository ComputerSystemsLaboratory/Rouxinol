#include <iostream>
#include <string>
#include <stdio.h>
#include <stack>
using namespace std;

int d[100];
int f[100];
int map[100][100];
int tim;
int n;
stack<int> s;
void visit(int);

int main(){
	tim=0;
	int i,j,k,u,v;
	for(i=0;i<100;i++) d[i]=-1; //?????¢??\
	for(i=0;i<100;i++) f[i]=-1;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			map[i][j]=-1;
		}
	}
	for(i=0;i<n;i++){
		cin>>u>>k;
		for(j=0;j<k;j++){
			cin>>v;
			map[u-1][v-1]=1; //?????????????????????????????????????????????
		}
	}
	 //????????¢?????¢?´¢
	for(i=0;i<n;i++){
		if(d[i]==-1) visit(i);
	}
	for(i=0;i<n;i++) cout<< i+1 <<" "<<d[i]<<" "<<f[i]<<endl;
	return 0;
}

void visit(int a){
	s.push(a); //?????¨??°
	if(d[a]==-1){
		d[a]=++tim;
	}
	for(int i=0;i<n;i++){
		if(map[a][i]==1 && d[i]==-1){ //?????¢?´¢
			visit(i);
		}
	}
	s.pop();
	f[a]=++tim;
}