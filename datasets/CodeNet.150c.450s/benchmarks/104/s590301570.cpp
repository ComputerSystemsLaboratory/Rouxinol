#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int w,n;
	vector<pair<int,int> > lines;

	cin>>w>>n;
	for(int i = 0; i < n; i++){
		pair<int,int> p;
		char comma;
		cin >> p.first >> comma >> p.second;
		lines.push_back(p);
	}

	int ret[31];
	for(int i = 1; i <= w; i++){
		int cp = i;
		for(int j = 0; j < lines.size(); j++){
			if(lines[j].first == cp){
				cp = lines[j].second;
			}
			else if(lines[j].second == cp){
				cp = lines[j].first;
			}
		}
		//cout << cp << endl;
		ret[cp] = i;
	}
	for(int i = 1; i <= w; i++){
		cout << ret[i] << endl;
	}

	return 0;
}