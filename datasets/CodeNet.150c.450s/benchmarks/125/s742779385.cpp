#include<iostream>
#include<vector>
using namespace std;

std::vector<pair<int, int> > stamp(101);
std::vector<std::vector<int> > v(101);
bool isCheckd[101];
int cnt = 0;

void dfs(int k){
	cnt++;
	isCheckd[k] = true;
	stamp[k].first = cnt;
	for(int i=0;i<v[k].size();i++){
		int next = v[k][i];
		if(!isCheckd[next]){
			dfs(next);
		}
	}
	cnt++;
	stamp[k].second = cnt;
}

int main(){
	int n;

	fill(isCheckd,isCheckd+101,false);
	isCheckd[0] = true;
	cin >> n;

	for(int i=0;i<n;i++){
		int u,k;
		cin >> u >> k;
		for(int j=0;j<k;j++){
			int in;
			cin >> in;
			v[u].push_back(in);
		}
	}

	for(int i=0;i<n;i++){
		if(!isCheckd[i])
			dfs(i);
	}


	for(int i=0;i<n;i++){
		cout << i+1 <<" "<< stamp[i+1].first <<" " <<stamp[i+1].second<< endl;
	}

	return 0;
}