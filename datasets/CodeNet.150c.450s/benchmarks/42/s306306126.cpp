#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <string>
#include <queue>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
struct node{
	node (string name,int time):name(name),time(time){}
	string name;
	int time;
};
queue <node> q;
int main(){
	int n,m;
	cin >> n >> m;
	while(n--){
		string s;int a;
		cin >> s >> a; 
		q.push(node(s,a));
	}
	int t = 0;
	while(!q.empty()){
		if(q.front().time <= m){
			t += q.front().time;
			cout << q.front().name << " " <<t << endl;
			q.pop();
		}else{
			t += m;
			node k = q.front();
			q.pop();
			q.push(node(k.name,k.time-m));
		}
	}
	return 0;
}