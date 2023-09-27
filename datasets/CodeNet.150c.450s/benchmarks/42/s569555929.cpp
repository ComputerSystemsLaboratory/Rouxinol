#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

struct Node{
	char name[10];
	int time;
};

queue<Node >Q;

int t = 0;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1;i <= n; i++){
		Node p;
		scanf("%s%d",p.name,&p.time);
		Q.push(p);
	}
	while(!Q.empty()){
		Node point = Q.front();Q.pop();
		if(point.time > m){
			point.time -= m;	
			t += m;
			Q.push(point);
			continue;
		}
		t += point.time;
		printf("%s %d\n",point.name,t);
	}
}