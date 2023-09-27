#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

int main(){
	int n;
	pair<double,double> input[4];
	double kata1,kata2;
	cin >> n;
	while(n--){
		for(int i = 0; i < 4; i++){
			cin >> input[i].first >> input[i].second;
		}

		kata1 = (input[1].second - input[0].second) / (input[1].first - input[0].first);
		kata2 = (input[3].second - input[2].second) / (input[3].first - input[2].first);

		if(kata1 == kata2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
	return 0;
}