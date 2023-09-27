#include<iostream>
#include<sstream>
#include<vector>
#include<climits>

using namespace std;

struct E
{
	int from, to;
	long cost;
};

int main(){
	ostringstream out;

	int n, u, k;
	cin >> n;

	vector<long> d(n);
	vector<E> e;

	fill(d.begin(),d.end(),LONG_MAX);
	d[0]=0;

	for(int i=0;i<n;i++){
		cin >> u >> k;
		for(int j=0;j<k;j++){
			E es={u,0,0};
			cin >> es.to >> es.cost; 
			e.push_back(es);
		}
	}

	while(true){
		bool update=false;
		for(int i=0;i<e.size();i++){
			if(d[e[i].from]!=LONG_MAX&&d[e[i].to]>d[e[i].from]+e[i].cost){
				d[e[i].to]=d[e[i].from]+e[i].cost;
				update=true;
			}
		}
		if(!update)break;
	}

	for(int i=0;i<n;i++)
		out << i << " " << d[i] << endl;

	cout << out.str();
	return 0;
}