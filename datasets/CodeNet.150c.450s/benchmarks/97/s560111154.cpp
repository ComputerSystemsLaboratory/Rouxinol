#include <iostream>
#include <vector>
#include <string>
using namespace std;

int direction[5] = {0,-1,0,1,0};

int main(){
	int n;
	while(cin >> n,n){
		vector<pair<int,int>> v;
		v.push_back(make_pair(0,0));
		for(int i=1;i<n;i++){
			int n,d;
			cin >> n >> d;
			pair<int,int> x = v[n];
			v.push_back(make_pair(x.first + direction[d+1], x.second + direction[d]));
		}
		int minx=0,miny=0;
		int maxx=0,maxy=0;
		for(int i=0;i<v.size();i++){
			minx = min(minx,v[i].first);
			miny = min(miny,v[i].second);
			maxx = max(maxx,v[i].first);
			maxy = max(maxy,v[i].second);
		}
		cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
	}
	return 0;
}