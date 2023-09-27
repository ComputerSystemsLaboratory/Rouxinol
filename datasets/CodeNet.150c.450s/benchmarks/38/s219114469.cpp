#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(){
	vector<string> results;
	int N = 0;
	cin >> N;
	for(int i = 0; i < N; i++){
		array<int, 3> triangle_vertex;
		for(int j = 0; j < 3; j++){
			cin >> triangle_vertex[j];
		}
		sort(begin(triangle_vertex), end(triangle_vertex));
		if(pow(triangle_vertex[0], 2) + pow(triangle_vertex[1], 2) == pow(triangle_vertex[2], 2)){
			results.push_back("YES");
		}
		else{
			results.push_back("NO");
		}
	}
	for(const auto& result : results){
		cout << result << endl;
	}
	return 0;
}