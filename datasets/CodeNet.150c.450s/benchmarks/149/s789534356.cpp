#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>

using namespace std;

int P[10011];

void init(int N){
	for(int i=0;i<N;i++)P[i]=i;
}
int root(int a){
	if(P[a]==a)return a;
	
	else return (P[a]=root(P[a]));
}

bool check(int a,int b){
	return root(a)==root(b);
}
void unite(int a,int b){
	P[root(a)]=root(b);
}

int main(){
	init(10001);
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++){
		int c,a,b;
		cin>>c>>a>>b;
		if(c==0)
			unite(a,b);
		else{ cout<<check(a,b) <<endl;

		}
	}
 return 0;
 }