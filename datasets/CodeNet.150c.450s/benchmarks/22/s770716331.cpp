#include <bits/stdc++.h>
using namespace std;

int	main()
{
	const static int	inf = 2000 * 10000 + 1;
	int	V, E, r;
	cin >> V >> E >> r;
	vector<int>	v_cost(V, inf);
	map<int, map<int, int>>	e_cost;
	int	s, t, d;
	for (int i = 0; i < E; ++i) {
		cin >> s >> t >> d;
		if (!e_cost.count(s))
			e_cost[s] = map<int, int>();
		e_cost.at(s)[t] = d;
	}
	bool	updated = false;
	v_cost.at(r) = 0;
	int		tmp_cost;
	for (int i = 0; i < V; ++i) {
		updated = false;
		for (s = 0; s < V; ++s) {
			if (v_cost.at(s) == inf)
				continue;
			if (!e_cost.count(s))
				continue;
			for (auto pr : e_cost.at(s)) {
				t = pr.first;
				tmp_cost = pr.second + v_cost.at(s);
				if (tmp_cost < v_cost.at(t)) {
				   v_cost.at(t) = tmp_cost;
				   updated = true;
				}
			}
		}
		if (!updated)
			break;
	}
	if (updated) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	for (int i = 0; i < V; ++i) {
		if (v_cost.at(i) == inf)
			cout << "INF" << endl;
		else
			cout << v_cost.at(i) << endl;
	}
}

