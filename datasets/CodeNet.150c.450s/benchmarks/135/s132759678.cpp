#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

#define rep(i,n) for(int (i)=0; (i)<(int)(n); i++)
#define DUMMY 0

using namespace std;

void make_map(vector<long> &sum, map<long, int> &map)
{
	for(int i=1; i<(int)sum.size(); i++){
		for(int j=0; i+j<(int)sum.size(); j++){
			if (map.count(sum[i+j]-sum[j]) == 0){
				map.insert(make_pair(sum[i+j]-sum[j], 1));
			}else{
				map[sum[i+j]-sum[j]]++;
			}
		}
	}
	return;
}

int main(void)
{
	int N, M;
	while(cin >> N >> M, N > 0){
		map<long, int> h_map;
		map<long, int> w_map;
		vector<long> h_sum;
		vector<long> w_sum;
		long result = 0;
		//hの累積和配列を作成
		h_sum.push_back(0);
		rep(i, N){
			int h;
			cin >> h;
			h_sum.push_back(h_sum.back() + h);
		}
		//h_mapの構成
		make_map(h_sum, h_map);
		//wの累積和配列を作成
		w_sum.push_back(0);
		rep(i, M){
			int w;
			cin >> w;
			w_sum.push_back(w_sum.back() + w);
		}
		//w_mapの構成
		make_map(w_sum, w_map);

		//h_mapのイテレータを回して，同じキー値をもつw_mapの要素数だけresultを加算
		for(auto itr = h_map.begin(); itr != h_map.end(); itr++){
			result += (*itr).second * w_map[(*itr).first];
		}

		//出力
		cout << result << endl;
	}
	return 0;
}
