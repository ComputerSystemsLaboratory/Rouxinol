#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	vector<int>rooms(n+1,-1);
	unordered_map<int,vector<int>>conn;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		conn[x].push_back(y);
		conn[y].push_back(x);
	}
	queue<int>q;
	unordered_set<int>s;
	q.push(1);
	s.insert(1);
	int count=n-1;
	while(!q.empty()){
		int sizes=q.size();
		for(int i=0;i<sizes;i++){
			int val=q.front();
			q.pop();
			for(int j=0;j<(int)conn[val].size();j++){
				int curr=conn[val][j];
				if(s.find(curr)==s.end()){
					count--;
					q.push(curr);
					rooms[curr]=val;
					s.insert(curr);
				}
			}
		}
	}
	if(count!=0){
		cout<<"No";
		return 0;
	}
	cout<<"Yes"<<endl;
	for(int i=2;i<=n;i++){
		cout<<rooms[i]<<endl;
	}
	return 0;
}
