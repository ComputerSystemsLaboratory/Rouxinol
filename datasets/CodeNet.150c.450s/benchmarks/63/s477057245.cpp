#include <iostream>
#include <vector>

using namespace std;



int main() {
	int V,E,r,s,t,din;
	vector<int> d,weight;
	vector<pair<int,int> > edge;

	cin >> V >> E >> r;
	for(int i=0;i<E;i++){
		cin >> s >> t >> din;
		edge.push_back(make_pair(s,t));
		weight.push_back(din);
	}

	for(int i=0;i<V;i++) {
		d.push_back(1000000000);
	}
	if(d.size()) d[r] = 0;
	if(!d.size()) d.push_back(0);

	for(int i=1;i<V;i++) {
		bool update = false;
		for(int j=0;j<E;j++) {
			int oldd = d[edge[j].second];
			d[edge[j].second] = min(d[edge[j].second],d[edge[j].first]+weight[j]);

			if(oldd != d[edge[j].second]) update = true;
		}
		if(!update) break;
	}
	for(int i=0;i<V;i++) {
		if(d[i] == 1000000000) {
			cout << "INF" << endl;
		} else {
		    cout << d[i] << endl;
		}
	}
}