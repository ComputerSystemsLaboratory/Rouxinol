#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#define  MAXN 10010
using namespace std;
struct Edge
{
	int point1;
	int point2;
	int weight;
};
bool cmp(Edge &x, Edge &y)
{
	return x.weight < y.weight;
}
int pre[MAXN];
vector <Edge> vec;
int find(int x)
{//并查集
	int root = x;

	while (pre[root] != root)
		root = pre[root];//找根
	int t = x;
	while (pre[t] != root)
	{//路径压缩
		int temp = pre[t];
		pre[t] = root;
		t = temp;
	}

	return root;
}
int main()
{
	int n, m;
	int min_sum = 0;

	scanf("%d%d", &n, &m);//n是点数，m是边数
	for (int i = 0; i < n; i++)
		pre[i] = i;//初始化并查集
	for (int i = 0; i < m; i++)
	{//输入每条边的两个顶点及其权重
		Edge temp;

		scanf("%d%d%d", &temp.point1, &temp.point2, &temp.weight);
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end(), cmp);//按权重对边进行排序
	int coun = 0;
	for (int i = 0; i < m; i++)
	{//最多只有m条边
		int fx = find(vec[i].point1);
		int fy = find(vec[i].point2);

		if (fx != fy)
		{//如果这条边的两个顶点所在集合不相同就合并
			coun++;//成功合并后就多了一条边
			min_sum += vec[i].weight;
			pre[fx] = fy;//合并
			if (coun == n - 1)
				break;//krusal有n-1条边
		}
	}
	printf("%d\n", min_sum);
	return 0;
}
