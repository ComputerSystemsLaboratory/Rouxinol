#include<iostream>
#include<vector>
using namespace std;

vector<int> par(100005,-1);

void initialize(int n){
	for (int i=0;i<n;i++){
		par[i]=i;
	}
	return;
}

int root(int x){
	if (x==par[x]){
		return x;
	}else{
		return par[x]=root(par[x]);
	}
}

bool find(int x,int y){
	return root(x)==root(y);
}

void uni(int x,int y){
	x=root(x);
	y=root(y);
	if(x==y){
		return;
	}else{
		par[x]=y;
	}
}

int main(){
	int n,m,q,i,j;
	int s,t;
	
	cin >> n >> m;
	
	initialize(n);
	
	for(i=0;i<m;i++){
		cin >> s >> t;
		uni(s,t);
	}
	
	cin >> q;
	
	for (i=0;i<q;i++){
		cin >> s >> t;
		if (find(s,t)){
			cout << "yes" <<endl;
		}else{
			cout << "no" <<endl;
		}
	}
	return 0;
}