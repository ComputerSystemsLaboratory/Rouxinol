#include <bits/stdc++.h>
using namespace std;

const int INF = (1<<30)-1;

template<typename T>
T gcd(T a, T b)
{
	return b ? gcd(b, a%b) : a;
}

template<typename T>
T lcm(T a, T b)
{
	return a / gcd(a, b) * b;
}

//(a^e)%mod
template<typename T>
T power(T a, T e, T mod)
{
	if(e == 0)
	{
		return 1;
	}
	if(e % 2 != 0)
	{
		//a^e=a^(e-1)*a
		return (power(a, e - 1, mod) * a) % mod;
	}
	T res = power(a, e / 2, mod);
	//a^e=a^(e/2)*a^(e/2)
	return (res * res) % mod;
}

template<typename T>
class Tree
{
private:
public:
	T data;
	Tree* parent = NULL;
	std::vector<Tree*> children;
	void setData(T x)
	{
		data = x;
	}
	void setParent(Tree* t)
	{
		parent = t;
	}
	void addChild(Tree* t)
	{
		children.push_back(t);
	}
	Tree(){}
	~Tree(){}
};

template<typename T>
class Graph
{
public:
	T index;
	vector<T> edge;
	void setEdge(T t)
	{
		edge.push_back(t);
	}
	Graph(){}
	~Graph(){}
};

int prim(int size, int cost[101][101])
{
	const int indexed = 1;
	const int WHITE = 0;
	const int BLACK = 1;
	const int GRAY = 2;
	int colour[size + indexed], d[size + indexed], p[size + indexed];
	int u;
	for (int i = indexed; i < size + indexed; ++i)
	{
		colour[i] = WHITE;
		d[i] = INF;
	}
	d[indexed] = 0;
	p[indexed] = -1;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> PQ;
	PQ.push(make_pair(0, indexed));

	while(!PQ.empty())
	{
		u = PQ.top().second;
		PQ.pop();
		colour[u] = BLACK;
		for (int i = indexed; i < size + indexed; ++i)
		{
			if(colour[i] != BLACK && cost[u][i] != INF)
			{
				if(cost[u][i] < d[i])
				{
					PQ.push(make_pair(cost[u][i], i));
					d[i] = cost[u][i];
					p[i] = u;
					colour[i] = GRAY;
				}
			}
		}
	}
	int sum = 0;
	for (int i = indexed; i < size + indexed; ++i)
	{
		if(p[i] != -1)
		{
			sum += cost[i][p[i]];
		}
		// cout << i << " " << p[i] << endl;
	}
	return sum;
}

int main()
{
	using namespace std;
	Graph<int> G[101];
	int costn[101][101];
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			int e;
			cin >> e;
			costn[i][j] = (e == -1 ? INF : e);
		}
	}
	cout << prim(n, costn) << endl;

	return 0;
}

