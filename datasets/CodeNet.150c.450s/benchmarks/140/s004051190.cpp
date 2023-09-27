#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;


struct Edge{
	int P1;
	int P2;
	int Wei;
};

int main(void){	

	vector<Edge> EdgeCol;
	int V, E;
	cin >> V >> E;
        if (V == 1){cout << 0<<endl;return 0;}
	vector<int>Select(V,0);
	for (int i = 0; i < E; ++i){
		int s, t, w;
		cin >> s >> t >> w;
		EdgeCol.push_back(Edge{ s, t, w });
	}
	sort(EdgeCol.begin(), EdgeCol.end(), [](Edge E1, Edge E2){return E1.Wei > E2.Wei; });
	int WeiSum = 0;
	int a=1;
	while (1){
		int aP1 = Select[EdgeCol.back().P1];
		int aP2 = Select[EdgeCol.back().P2];
		if (aP1 && aP2){
			if (aP1 != aP2){
				replace(Select.begin(), Select.end(), aP2, aP1);
				WeiSum += EdgeCol.back().Wei;
			}
		}
		else if (!aP1 && !aP2){
			Select[EdgeCol.back().P1] = a;
			Select[EdgeCol.back().P2] = a;
			a++;
			WeiSum += EdgeCol.back().Wei;
		}
		else{
			Select[EdgeCol.back().P1] = max(aP1, aP2);
			Select[EdgeCol.back().P2] = max(aP1, aP2);
			WeiSum += EdgeCol.back().Wei;
		}
		EdgeCol.pop_back();
		if (all_of(Select.cbegin(), Select.cend(), [=](int s){return s == *Select.cbegin();})){
			cout << WeiSum << endl;
			return 0;
		}
	}
	return 0;
}