#include <cstdio>
#include <queue>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;
typedef pair<string,int> P;
int n,qt;
vector<P> vec;


int main(void){
	scanf("%d%d",&n,&qt);
	queue<P> que;
	for(int i=0;i<n;i++){
		string s;
		int t;
		cin >> s >> t;
		que.push(P(s,t));
	}
	int now=0;
	while(que.size()){
		P q=que.front();
		que.pop();
		if(q.second<=qt){
			vec.push_back(P(q.first,now+q.second));
			now+=q.second;
		}else{
			now+=qt;
			que.push(P(q.first,q.second-qt));
		}
	}
	for(int i=0;i<n;i++){
		cout << vec[i].first << " " << vec[i].second << endl;
	}
	return 0;
}