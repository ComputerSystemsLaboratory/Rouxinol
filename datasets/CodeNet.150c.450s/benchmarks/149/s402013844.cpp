// DSL_1_A
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int findSet(int x, vector<int> &p){
	if(x != p[x])
		p[x] = findSet(p[x], p);
	return p[x];
}

bool isSameSet(int x, int y, vector<int> &p){
	return findSet(x, p) == findSet(y, p);
}

void link(int x, int y, vector<int> &p, vector<int> &rank){
	if(rank[x] > rank[y]){
		p[y] = x;
	}else{
		p[x] = y;
		if(rank[x] == rank[y])
			rank[y]++;
	}
}

void unite(int x, int y, vector<int> &p, vector<int> &rank){
	link(findSet(x, p), findSet(y, p), p, rank);
}

int main(){
	int n, q, com, x, y;
	vector<int> p, rank;

	cin>>n>>q;
	
	for(int i=0;i<n;i++){
		p.push_back(i);
		rank.push_back(0);
	}

	for(int i=0;i<q;i++){
		cin>>com>>x>>y;

		if(com == 0)
			unite(x, y, p, rank);
		else if(com == 1)
			cout<<isSameSet(x, y, p)<<endl;
	}

	return 0;
}