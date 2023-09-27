
#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>
#include<vector>
#include<cstring>
#include<set>
#include <cstdio>
#include<queue>
#include<map>
#define WHITE 0
#define GRAY  1
#define BLACK 2
#define endl '\n'
#define forup(i,a,n) for( int i =a; i < n; i++)
#define llforup(i,a,n) for( ll i =a; i < n; i++)
#define fordown(i,a,n) for( int i =a; i >= n; i--)
#define fornot(i,a,n) for( int i=a;!n;i++)
#define mod  (ll)(1e9+7)
#define ifempty(a)  if(!a)
using namespace std;
typedef long long ll;
inline int readnum()
{
	int p, data = 0; char ch = 0;
	while ((ch != '-') &&( ch < '0' || ch>'9') )//注意运算优先级，逻辑与大于逻辑非
		ch = getchar();//相当于正则表达式的搜索，跳过不需要的字符
	if (ch == '-')
		p = -1, ch = getchar();//不能与if平行放置，不懂为什么，可能是bug
	else p = 1;
	while (ch >= '0' && ch <= '9') data = data * 10 + ch - '0', ch = getchar();//搜索需要的字符
	return data * p;
}
inline int ReadPossitive()
{
	char ch; int data = 0;
	ch = getchar();
	while (ch == ' ' || ch == '\n')ch = getchar();
	while (ch != ' ' && ch != '\n' && ch != EOF)
	{
		data = data * 10 + ch - '0';
		ch = getchar();
	}
	return data;
}
//并查集模板
class DisjointSet {
private:
	vector<int>rank, parent;
public:
	DisjointSet(){}
	DisjointSet(int size)
	{
		rank.resize(size, 0);//默认初始化为0，养成习惯写完整
		parent.resize(size, 0);
		forup(i, 0, size)MakeSet(i);
	}
	void MakeSet(int x)
	{
		parent[x] = x;
		rank[x] = 0;
	}
	bool same(int x, int y)
	{
		return Findroot(x) == Findroot(y);
	}
	void unite(int x, int y)
	{
		link(Findroot(x), Findroot(y));
	}
	inline int Findroot(int x)
	{
		while (x != parent[x])
		{
			x = parent[x];
		}
		return x;
	}
	void link(int rootx, int rooty)
	{
		if (rank[rootx] < rank[rooty])parent[rootx] = parent[rooty];
		else
		{
			parent[rooty] = parent[rootx];
			if (rank[rootx] == rank[rooty])
				rank[rootx]++;
		}
	}
};
//E-mail 374656045@qq.com
class edge {
public:
	int u, v, value;//因为要对边集进行排序，所以要将起点u也加入结构体中，不能用邻接表
    edge(int u=0, int v=0, int value=0) :u(u), v(v), value(value) {}//默认初始更安全
	bool operator<(const edge& e)const {//花括号前的const是限定函数的功能，不允许改变成员变量的值。只能在类里面用
		return value < e.value;
	}
};
class solve {
private:
	vector<edge> edges;
	int n, m;
public://采用邻接表建图,带权无向图
	solve()
	{
		initial();
		int ans = kruskal();
		printf("%d\n", ans);
	}
	void initial()
	{
		int u, v, value;
		n = ReadPossitive(); m = ReadPossitive();
		forup(i, 0, m)
		{
			u = ReadPossitive(); v = ReadPossitive(); value = ReadPossitive();
			edges.push_back(edge(u, v, value));
		}
		sort(edges.begin(), edges.end());
	}
	
	int kruskal()
	{
		int TotalCost = 0;
		DisjointSet disjointset(n);
		forup(i, 0, m)
		{
			if (!disjointset.same(edges[i].u, edges[i].v))//把合适的点添加到最小生成树中，如果两个点都在最小生成树中，他们相连接就会成环
			{
				TotalCost += edges[i].value;
				disjointset.unite(edges[i].u, edges[i].v);
			}
		}
		return TotalCost;
	}
	
};
int main(void)
{
	ios_base::sync_with_stdio(0); cin.tie(0);//慎用，cin和scanf混用会导致非MSC++WA
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve solution;
#ifdef DEBUG
	fclose(stdin);//关闭文件 
	fclose(stdout);//关闭文件 
#endif
	return 0;

}


