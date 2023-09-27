#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	map<int, int> cnt;
	int maxCnt = 0;
	while(cin >> n){
		cnt[n]++;
		maxCnt = max(maxCnt, cnt[n]);
	}
	for(map<int,int>::iterator itr = cnt.begin(); itr != cnt.end(); itr++){
		if(maxCnt == itr->second){
			cout << itr->first << endl;
		}
	}

	return 0;
}