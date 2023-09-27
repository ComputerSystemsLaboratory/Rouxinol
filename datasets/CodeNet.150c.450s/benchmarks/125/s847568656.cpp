#include<iostream>
#include<vector>
#include<limits.h>
#include<stack>
#include<string>
using namespace std;

vector< vector<int> > L(105);
vector<int> d(105,0);
vector<int> f(105,0);
vector<bool> c(105,0);
int count=0;

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

void dfs (int v){
	if(c[v]) return ;
	count++;
	c[v]=1;
	d[v]=count;
	for (int i=0;i<L[v].size();i++){
		dfs(L[v][i]);
	}
	count++;
	f[v]=count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,i,j;
	cin >> n;
	
	int id, deg, v;
	for (i=0;i<n;i++){
		cin >> id >> deg;
		for (j=0;j<deg;j++){
			cin >> v;
			L[id-1].push_back(v-1);
		}
	}
	for (i=0;i<n;i++){
		dfs(i);
	}
	for (i=1;i<n+1;i++){
		cout << i << " " << d[i-1] << " " << f[i-1] <<endl;
	}
	return 0;
}