#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>

long long int INF = 1e18;
using namespace std;

typedef pair<long long int, long long int> P;

vector<int> E[1100];
int parent[1100];

vector<int> v1, v2, v3;

void f1(int u){
	v1.push_back(u);
	if(E[u][0] != -1){
		f1(E[u][0]);
	}
	if(E[u][1] != -1){
		f1(E[u][1]);
	}
}

void f2(int u){
	if(E[u][0] != -1){
		f2(E[u][0]);
	}
	v2.push_back(u);
	if(E[u][1] != -1){
		f2(E[u][1]);
	}
}

void f3(int u){
	if(E[u][0] != -1){
		f3(E[u][0]);
	}
	if(E[u][1] != -1){
		f3(E[u][1]);
	}
	v3.push_back(u);
}


int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		parent[i] = -1;
	}
	
	for(int i = 0; i < n; i++){
		int id, c1, c2;
		cin >> id >> c1 >> c2;
		E[id].push_back(c1);
		E[id].push_back(c2);
		if(c1 != -1){
			parent[c1] = id;
		}
		if(c2 != -1){
			parent[c2] = id;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(parent[i] == -1){
			f1(i);
			f2(i);
			f3(i);
			break;
		}
	}
	
	cout << "Preorder" << endl;
	for(int i = 0; i < v1.size(); i++){
		cout << " " << v1[i];
	}
	cout << endl;
	
	cout << "Inorder" << endl;
	for(int i = 0; i < v2.size(); i++){
		cout << " " << v2[i];
	}
	cout << endl;
	
	cout << "Postorder" << endl;
	for(int i = 0; i < v3.size(); i++){
		cout << " " << v3[i];
	}
	cout << endl;
	
	return 0;
}
