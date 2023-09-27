#include <bits/stdc++.h>

struct Edge {
	int to;
	int64_t dist{1};

	// int64_t cost;
	// int from;
	// int rev_i;
};
using EdgeVec = std::vector<Edge>;
using EdgeLists = std::vector<EdgeVec>;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////// ここからコピペ ////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename Metric = int64_t>
class BellmanFord {
private:
	const EdgeLists& edges_;
	const int source_;
	std::vector<Metric> distance_;
public:
	const Metric inf, negative_inf;

	BellmanFord(const EdgeLists& edges, const int source)
		: edges_(edges), source_(source), distance_(edges.size(), std::numeric_limits<Metric>::max()),
		inf(std::numeric_limits<Metric>::max()), negative_inf(std::numeric_limits<Metric>::min())
	{
		distance_[source] = 0;
		for (int loop{}; loop < (int)edges_.size(); loop++)
			for (int now{}; now < (int)edges_.size(); now++)
				if (distance_[now] != inf)
					for (const Edge& next: edges_[now])
						distance_[next.to] = std::min(distance_[next.to], distance_[now] + next.dist);
		
		std::vector<bool> isInCycle(edges_.size());
		std::queue<int> updatedQueue;
		for (int from{}; from < (int)edges_.size(); from++)
			if (distance_[from] != inf)
				for (const Edge& next: edges_[from])
					if (!isInCycle[next.to] && distance_[from] + next.dist < distance_[next.to])
					{
						isInCycle[next.to] = true;
						updatedQueue.push(next.to);
					}
		while (!updatedQueue.empty())
		{
			int now{updatedQueue.front()};
			updatedQueue.pop();
			distance_[now] = negative_inf;
			for (const Edge& next: edges_[now])
				if (!isInCycle[next.to])
				{
					isInCycle[next.to] = true;
					updatedQueue.push(next.to);
				}
		}
	}

	// get distance_
	Metric operator[](const int index) const
	{
		return distance_[index];
	}

	decltype(distance_.begin()) begin() { return distance_.begin(); }
	decltype(distance_.end()) end() { return distance_.end(); }

	bool negativeCycleExists() const
	{
		for (const Metric& dist: distance_)
			if (dist == negative_inf)
				return true;
		return false;
	}
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////// ここまでコピペ ////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int V, E, r;
	scanf("%d%d%d", &V, &E, &r);
	EdgeLists edges(V);
	for (int i{}; i < E; i++)
	{
		int s, t, d;
		scanf("%d%d%d", &s, &t, &d);
		edges[s].push_back({t, d});
	}
	BellmanFord<> bellmanFord(edges, r);
	
	if (bellmanFord.negativeCycleExists())
		puts("NEGATIVE CYCLE");
	else
		for (auto& e: bellmanFord)
			if (e == bellmanFord.inf)
				puts("INF");
			else
				printf("%lld\n", e);
	return 0;
}
