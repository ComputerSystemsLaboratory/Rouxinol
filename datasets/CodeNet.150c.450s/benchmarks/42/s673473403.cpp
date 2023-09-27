#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>

using namespace std;

typedef pair<string,int> P;

int main(){
	queue<P> que;
	P task;
	int n,q,time=0;
	cin >> n >> q;
	for(int i=0;i < n;i++){
		cin >> task.first >> task.second;
		que.push(task);
	}
	
	while(!que.empty()){
		task = que.front();que.pop();
		if(task.second>q){
			time += q;
			task.second -= q;
			que.push(task);
		}else{
			time += task.second;
			cout << task.first << " " << time << endl;
		}
	}
	return 0;
}