#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(int, char**){
	int n;
	vector<int> ret;
	while(true){
		int n,buf;
		vector<int> scores;
		cin >> n;
		if(n == 0) break;

		for(int i = 0; i < n; ++i){
			cin >> buf;
			scores.push_back(buf);
		}
		scores.erase(max_element(scores.begin(),scores.end()));
		scores.erase(min_element(scores.begin(),scores.end()));
		ret.push_back( std::accumulate(scores.begin(), scores.end(), 0) / scores.size() );
	}

	for(int av : ret){
		cout << av << endl;
	}
	return 0;
}