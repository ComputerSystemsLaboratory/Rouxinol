#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

#define N 500000
int key[N];
int rt[N];
int lt[N];
int parent[N];
int np = 0;
int root = -1;

void insert(int k){
	int y = -1;
	int x = root;
	while(x!=-1){
		y = x;
		if(k < key[x]){
			x = lt[x];
		}else{
			x = rt[x];
		}
	}
	if(y==-1){
		root = np;
	}else{
		if(k<key[y]){
			lt[y] = np;
		}else{
			rt[y] = np;
		}
	}
	key[np] = k;
	parent[np] = y;
	np++;
}

void saiki1(int x){
	if(lt[x]!=-1) saiki1(lt[x]);
	cout << " " << key[x];
	if(rt[x]!=-1) saiki1(rt[x]);
}

void saiki2(int x){
	cout << " " << key[x];
	if(lt[x]!=-1) saiki2(lt[x]);
	if(rt[x]!=-1) saiki2(rt[x]);
}
void print(){
	saiki1(root);
	cout << endl;
	saiki2(root);
	cout << endl;
}


int main(){

	for(int i=0; i<N; i++){
		key[i] = -1;
		parent[i] = -1;
		lt[i] = -1;
		rt[i] = -1;
	}

	int n;
	cin >> n;
	for(int i=0; i<n; i++){
//		cout << i << endl;
		string s;
		cin >> s;
		if(s=="print"){
			print();
		}else if(s=="insert"){
			int k;
			cin >> k;
			insert(k);
		}
	}


	return 0;
}