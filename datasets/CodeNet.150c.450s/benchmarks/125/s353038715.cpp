#include<iostream>
#include<vector>
#include<limits.h>
#include<stack>
#include<string>
using namespace std;

struct Vertex{
	int deg;
	vector<int> adj;
	int checked;
	int parent;
};

int out(vector<int> &A){
	int n=A.size();
	int i;
	if (n==0){
		cout << "nothing" <<endl;
	}else if(n==1){
		cout << A[0] << endl;
	}else{
		for (i=0;i<=n-2;i++){
			cout << A[i] << " ";
		}
		cout << A[n-1] <<endl;
	}
}

int Next(vector<Vertex> &L,vector<int> &d, vector<int> &f, int cur, int count){
	int next,i,v;
	if(L[cur].deg==0){
		next=L[cur].parent;
		f[cur]=count;
		return next;
	}
	
	for (i=0;i<L[cur].deg;i++){
		v=L[cur].adj[i];
		if(L[v].checked==0){
			break;
			}
		}
		if(i==L[cur].deg){
			next=L[cur].parent;
			f[cur]=count;
		}else{
			next=v;
			L[next].parent=cur;
			L[next].checked=1;
			d[next]=count;
		}
	return next;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,i,j;
	cin >> n;
	
	vector<Vertex> L(n);
	vector<int> d(n);
	vector<int> f(n);
	
	int id,de,v;
	for (i=0;i<n;i++){
		cin >> id >> de;
		L[id-1].deg=de;
		for (j=0;j<de;j++){
			cin >> v;
			L[id-1].adj.push_back(v-1);
		}
		L[id-1].checked=0;
		L[id-1].parent=-1;
	}
	
	int cur=0;
	int next,count=0;
	
	while(1){
		count++;
		for (i=0;i<n;i++){
			if(L[i].checked==0){
				break;
			}
		}
		if (i==n){
			break;
		}
		L[i].checked=1;
		d[i]=count;
		cur=i;
		while(1){
			count++;
			next=Next(L,d,f,cur,count);
			if (next==-1){
				break;
			}
			cur=next;
		}
		}
	for (i=1;i<n+1;i++){
		cout << i << " " << d[i-1] << " " << f[i-1] <<endl;
	}
	return 0;
}
	