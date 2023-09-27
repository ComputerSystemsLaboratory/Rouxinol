#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){
	int N;
	
	while(cin >> N, N){
		vector<pair<int, int> > a;
		a.push_back(make_pair(0, 0));
		
		for(int i = 0; i < N - 1; i++){
			int n, d;
			cin >> n >> d;
			switch(d){
			case 0:
			a.push_back(make_pair(a[n].first - 1, a[n].second));
			break;

			case 1:
			a.push_back(make_pair(a[n].first, a[n].second - 1));
			break;

			case 2:
			a.push_back(make_pair(a[n].first + 1, a[n].second));
			break;

			case 3:
			a.push_back(make_pair(a[n].first, a[n].second + 1));
			break;
			}
		}
		int minx = 0, maxx = 0, miny = 0, maxy = 0;
		for(int i = 0; i < a.size(); i++){
			if(minx > a[i].first) minx = a[i].first;
			if(maxx < a[i].first) maxx = a[i].first;
			if(miny > a[i].second) miny = a[i].second;
			if(maxy < a[i].second) maxy = a[i].second;
		}
		cout << maxx - minx + 1 << " " << maxy - miny + 1 << endl;
	}
	return 0;
}