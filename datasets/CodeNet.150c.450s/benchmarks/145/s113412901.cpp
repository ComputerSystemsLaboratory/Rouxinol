#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	string str,manyStr,longStr;
	map<string, int> m;
	int cnt = 1;
	int length = 0;
	while(cin >> str){
		m[str]++;
	}
	for(auto it = m.begin(); it != m.end(); it++){
		if(it->first.size() > length){
			length = it->first.size();
			longStr = it->first;
		}
		if(it->second > cnt){
			cnt = it->second;
			manyStr = it->first;
		}
	}
	cout << manyStr << " " << longStr << endl;
}