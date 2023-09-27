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

int find_saiki(int x, int k){
	if(x==-1) return 0;
	if(k==key[x]) return 1;

	if(k<key[x]){
		return find_saiki(lt[x], k);
	}else{
		return find_saiki(rt[x], k);
	}
	return 0;
}

int find(int k){
	return find_saiki(root, k);
}

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

void print_saiki1(int x){
	if(lt[x]!=-1) print_saiki1(lt[x]);
	cout << " " << key[x];
	if(rt[x]!=-1) print_saiki1(rt[x]);
}

void print_saiki2(int x){
	cout << " " << key[x];
	if(lt[x]!=-1) print_saiki2(lt[x]);
	if(rt[x]!=-1) print_saiki2(rt[x]);
}
void print(){
	print_saiki1(root);
	cout << endl;
	print_saiki2(root);
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
		}else if(s=="find"){
			int k;
			cin >> k;
			if(find(k)){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}
	}


	return 0;
}