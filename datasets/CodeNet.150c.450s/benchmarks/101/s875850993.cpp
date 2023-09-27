#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#define N 100000
using namespace std;


int C[N];
queue<int> k;
vector<int> v[N];
void color(int);
bool search(int,int);

int main(){
	int n,m,a,b,q;
	cin >> n >>m;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	cin >> q;
	for(int i=0;i<n;i++){
		C[i]=-1; //?????????
	}
	for(int i=0;i<n;i++){
		if(C[i]==-1)color(i); //i????§??????¨????????±???
	}
	for(int i=0;i<q;i++){
		cin>>a>>b;
		if(search(a,b)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}

bool search(int a,int b){
	if(C[a]==C[b]) return true;
	else return false;
}

void color(int a){
	static int c=0;
	c++;
	C[a]=c;
	k.push(a);
	while(!k.empty()){
		int m = k.front();
		k.pop();
		for(int i=0;i<v[m].size();i++){
			int Z= v[m].at(i);
			if(C[Z]==-1){
				C[Z]=c;
				k.push(Z);
			}
		}
	}
}