#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define INFTY 1000000000
using namespace std;
bool list[100][100];
int ti[100];
int n;

void bfs(int now){
	queue<int> next;
	next.push(now);
	while(next.size()!=0){
		now=next.front();	next.pop();
		for(int i=0;i<n;i++){
			if(list[now][i]&&ti[i]==INFTY){
				ti[i]=ti[now]+1;
				next.push(i);
			}
		}
	}
}

int main(){
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++)	list[i][j]=false;
		ti[i]=INFTY;
	}
	cin>>n;
	int id,num,ne;
	for(int i=0;i<n;i++){
		cin>>id>>num;
		id--;
		for(int j=0;j<num;j++){
			cin>>ne;
			list[id][ne-1]=true;
		}
	}
	ti[0]=0;	bfs(0);
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<((ti[i]==INFTY)?(-1):ti[i])<<endl;
	}
	return 0;
}