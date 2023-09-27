#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int root(vector<int> &U,int x){
	if(x==U[x]){
		return x;
	}else{
		return U[x]=root(U,U[x]);
	}
}

void unite(vector<int> &U,int x,int y){
	int px=root(U,x);
	int py=root(U,y);
	U[px]=py;
}

bool same(vector<int> &U,int x,int y){
	return root(U,x)==root(U,y);
}

int main(){
	int n,q,command,x,y;
	cin >> n >> q;
	
	vector<int> U(n);
	for (int i=0;i<n;i++){
		U[i]=i;
	}
	
	for(int i=0;i<q;i++){
		cin >> command >> x >> y;
		if(command==0){
			unite(U,x,y);
		}else{
			cout << same(U,x,y) <<endl;
		}
	}
	
	return 0;
}