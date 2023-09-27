#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
static const int MAX_N = 10;
int a[MAX_N] = {0};

bool dfs(int a[],vector<int> r,vector<int> l,int i){
	if(i==MAX_N)return true;
	if(r.size()==0 || r[r.size()-1]<a[i]){
		r.push_back(a[i]);
		return dfs(a,r,l,i+1);
	}
	if(l.size()==0 || l[l.size()-1]<a[i]){
		l.push_back(a[i]);
		return dfs(a,r,l,i+1);
	}
	return false;
}


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<10;j++){//input
			cin>>a[j];
		}
		vector<int> r;
		vector<int> l;
		if(dfs(a,r,l,0)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}