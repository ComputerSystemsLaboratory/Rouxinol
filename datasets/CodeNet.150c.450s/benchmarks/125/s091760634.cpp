#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > list(100);
vector<vector<int> > timed(100);
int times;
void dfs(int now){
	if(!timed[now].empty())	return;
	timed[now].push_back(times++);
	for(int i=0;i<(int)list[now].size();i++){
		dfs(list[now][i]);
	}
	timed[now].push_back(times++);
}

int main(){
	int n;	cin>>n;
	int id,num,ne;
	for(int i=0;i<n;i++){
		cin>>id>>num;
		id--;
		for(int j=0;j<num;j++){
			cin>>ne;
			list[id].push_back(ne-1);
		}
	}
	times=1;
	for(int i=0;i<n;i++){
		if(timed[i].empty())	dfs(i);
	}
	for(int i=0;i<n;i++){
		cout<<i+1;
		for(int j=0;j<(int)timed[i].size();j++){
			cout<<" "<<timed[i][j];
		}
		cout<<endl;
	}
	return 0;
}