#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m, n && m){
		vector<int> vec;
		map<int, int> mapX, mapY;
		//nの入力
		for(int i = 0; i < n; i++){
			int hi;
			cin >> hi;
			vec.push_back(hi);
		}
		for(int i = 0; i < n; i++){
			int h = 0;
			for(int j = i; j < n; j++){
				h += vec[j];
				mapY[h]++;
			}
		}
		vec.clear();
		//mの入力
		for(int i = 0; i < m; i++){
			int hi;
			cin >> hi;
			vec.push_back(hi);
		}
		for(int i = 0; i < m; i++){
			int h = 0;
			for(int j = i; j < m; j++){
				h += vec[j];
				mapX[h]++;
			}
		}

		//正方形を数える
		int count = 0;
		map<int, int>::iterator iteX, iteY;
		for(iteY = mapY.begin(); iteY != mapY.end(); iteY++){
			iteX = mapX.end();
			if(mapX.find(iteY->first) != iteX){
				count += mapX[iteY->first] * iteY->second;
			}
		}
		cout << count << endl;
	}
}