#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
static const int INF = 999999999;
struct SEdge
{
	unsigned long long int From;
	unsigned long long int To;
	unsigned long long int Cost;
};
unsigned long long int V;
vector<int> d;
vector<SEdge> Edge;

void Bellman_Ford(int s)
{
	fill(d.begin(), d.end(), INF);
	d[s] = 0;
	bool update = true;
	while(update)
	{
		update = false;
		int n = Edge.size();
		for(int i = 0; i < n; ++i)
		{
			SEdge e = Edge[i];
			if(d[e.From] != INF && d[e.To] > d[e.From] + e.Cost)
			{
				d[e.To] = d[e.From] + e.Cost;
				update = true;
			}
		}
	}
}

void solve()
{
	int E;
	while(cin >> E, E)
	{
		V = 0;
		Edge.clear();
		Edge.resize(2 * E);
		for(int i = 0; i < E; ++i)
		{
			unsigned long long int From, To, Cost;
			cin >> From >> To >> Cost;
			V = max(V, max(From, To));
			Edge[2 * i + 1].To = Edge[2 * i].From = From;
			Edge[2 * i + 1].From = Edge[2 * i].To = To;
			Edge[2 * i + 1].Cost = Edge[2 * i].Cost = Cost;
		}
		++V;
		d.clear();
		d.resize(V);
		unsigned long long int Min = INF;
		int pos = 0;
		for(int i = 0; i < V; ++i)
		{
			Bellman_Ford(i);
			unsigned long long int sum = 0;
			for(int j = 0; j < V; ++j)
			{
				sum += d[j];
			}
			if(Min > sum)
			{
				Min = sum;
				pos = i;
			}
		}
		cout << pos << " " << Min << endl;
	}
}

int main()
{
	solve();
	return(0);
}