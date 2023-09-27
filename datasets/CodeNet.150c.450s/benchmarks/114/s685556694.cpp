#include<vector>
#include<algorithm>
#include<queue>
#include<stdio.h>
using namespace std;
//结点数最大值 
const int maxn = 1000;
//结点权值最大值 
const int INFTY = 1000000;
//first是下一个结点位置,second是权值 
vector< pair<int,int> > g[maxn];
//parent是父节点,d是当前最短边,is是是否使用过 
int parent[maxn],d[maxn],is[maxn];
//结点数 
int n;
//初始化函数 
void Init(){
	for(int i = 0;i<n;++i){
		//父节点全设置为不存在 
		parent[i] = -1;
		//全设置为最大距离 
		d[i] = INFTY;
		//为输入边和权值做好准备 
		g[i].clear();
		//初始化各边使用状态 
		is[i] = false;
	}
}
int prim(){
	//最小生成树总权值 
	int ans = 0;
	//存储边 
	priority_queue< pair<int,int> >q;
	pair<int,int> work;
	//将0起点的存进去 
	for(int i = g[0].size()-1;i>=0;--i){
		work= g[0][i];
		parent[work.first] = 0;
		//最大堆变最小堆 
		work.second*=-1;
		swap(work.first,work.second);
		q.push(work);
	}
	is[0] = true;
	
	while(q.size()){
		work = q.top();q.pop();
		//to是结点号,v是权值 
		int to = work.second,v = -1*work.first;
		//距离过大或者目标节点已被标记则略过 
		if(d[to]<to||is[to])continue;
		is[to] = true;
		//展示选择的边 
		//printf("%d --> %d:%d\n",parent[to],to,v);
		ans+=v;
		//将当前结点to的边加进队列 
		for(int i  = g[to].size()-1;i>=0;--i){
			work= g[to][i];
			//如果权值比当前的还要大或者目标结点已经被标记过了则跳过 
			if(is[work.first]||d[work.first]<work.second)continue;
			parent[work.first] = to;
			work.second*=-1;
			swap(work.first,work.second);
			q.push(work);
		}
	}
	return ans;
}
int main(){
	int m,a,b,c;
	scanf("%d",&n);
	Init();
	for(int i = 0;i<n;++i){
		for(int j = 0;j<n;++j){
		scanf("%d",&a);
		if(a==-1)continue; 
		g[i].push_back(make_pair(j,a));
		}
	}
	printf("%d\n",prim());
	return 0;
}
//test:
/*
6 10
0 1 2
0 3 1
1 3 3
1 2 1
1 4 2
3 2 2
3 5 2
2 4 5
2 5 3
4 5 1
*/
