#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <set>
#include <stdio.h>
#include <cstdio>
using namespace std;
int p[100001],s[100001],t[100001],cost[100001];
int root(int a) {
	if (p[a] == a) return a;
	return (p[a] = root(p[a]));
}
void unite(int a,int b){
	p[root(a)] = root(b);
}
bool same(int a ,int b){
	if (root(a) == root(b)) return 1;
	else return 0;
}
bool rcheck(int a){
	if (root(a) == a) return 1;
	else return 0;
}
pair <int,int> path[100001];
int main() {
	int n,coun = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		p[i] = i;
		for (int j = 0;j<n;j++) {
			s[n*i+j] = i; t[n*i+j]=j; 
			cin >> cost[n*i+j];
		}
	}
	for (int i = 0;i < n*n;i++) {
		path[i].first = cost[i];
		path[i].second = i;
	}
	sort(path,path+n*n);
	for (int i = 0; i < n*n;i++) {
		if (path[i].first >= 0) {
			if(same(s[path[i].second],t[path[i].second]) == 0) {
				unite(s[path[i].second],t[path[i].second]);
				coun += path[i].first;
			}
		}
	}
	cout << coun << endl;
}