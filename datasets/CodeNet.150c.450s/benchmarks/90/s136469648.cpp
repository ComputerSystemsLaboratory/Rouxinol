#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){

	int n;
	map<int,int> m;
	while(cin>>n){
		m[n]++;
	}

	int maxCnt=0;
	int maxVal=0;

	vector<int> maxValList;
	for(map<int,int>::iterator it = m.begin(); it != m.end(); it++){
		if(maxCnt<it->second){
			maxCnt=it->second;
			maxVal=it->first;
			maxValList.clear();
			maxValList.push_back(it->first);
		}
		else if(maxCnt==it->second){
			maxValList.push_back(it->first);
		}
	}
	sort(maxValList.begin(),maxValList.end());
	for(int i = 0; i < maxValList.size(); i++){
		cout<<maxValList[i]<<endl;
	}


	return 0;
}