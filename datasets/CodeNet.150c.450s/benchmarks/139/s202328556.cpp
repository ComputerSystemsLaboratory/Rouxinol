#include<bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;
#define pi acos(-1)
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define mem(a) memset(a,0,sizeof(a))
#define cio ios::sync_with_stdio(false);
int s[200010];    // 结果
vector<int>v[200010]; // 建图
int main()
{   	
	int n, m;
	cin >> n >> m;
	int a, b;
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
	v[a].push_back(b);
	v[b].push_back(a);
	}
	queue<int>q; // 队列用于搜索路径
	s[1] = 0; // 从1开始
	for(int i = 0; i < v[1].size(); i++){ // 将和1直接相连得点进去队列
		q.push(v[1][i]);
		s[v[1][i]] = 1; // 前一个点为1
	}
	while(!q.empty()){
		int p = q.front(); // 取队首元素
		q.pop(); // 移除队列
		for(int i = 0; i < v[p].size(); i++){ // 将与队首元素直接相连的点进入队列
			if(s[v[p][i]]==0&&v[p][i]!=1){ // 如果该点未走过，进入队列
				q.push(v[p][i]);
				s[v[p][i]] = p; // 该点前一个点即为队首元素p
			}
		}
	}
	int flag = 1;
	for(int i = 2; i <= n; i++){ // 判断是否每个点都可到达1
		if(s[i]==0){
			flag = 0;
			break;
		}
	}
	// 输出结果
	if(!flag){
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
		for(int i = 2; i <= n; i++){
			cout << s[i] << endl;
		}
	}
    return 0;
}
