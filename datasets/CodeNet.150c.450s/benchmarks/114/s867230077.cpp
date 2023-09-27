#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define INF 2000000
#define MAX 20000
int m[MAX][MAX],color[MAX],d[MAX],num;
int spaning(){
	for(int i=0;i<num;i++){
		color[i]=0;d[i]=INF;
	}
	d[0]=0;
	int sum=0;
	int min_now=INF;
	while(1){
		int v=-1;
	for(int i=0;i<num;i++){
		if(!color[i]&&(v==-1||d[v]>d[i])){
			v=i;
		}}
		if(v==-1) break;
		sum+=d[v];
		color[v]=1;
	for(int i=0;i<num;i++){
		if(!color[i]){
			d[i]=min(d[i],m[v][i]);
		}
	
	}
	}
	return sum;
}
int main(){
	int a;
	cin>>num;
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			cin>>a;
			if(a==-1) m[i][j]=INF;
			else m[i][j]=a;
		}
	}
	int s=spaning(); 
	cout<<s<<endl;
}
