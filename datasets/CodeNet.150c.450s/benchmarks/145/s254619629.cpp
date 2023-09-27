#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){

	map<string,int> m;
	string str;
	string maxLength;
	while(cin>>str){
		m[str]++;
		if(maxLength.size() < str.size())
			maxLength=str;
	}
	int maxCnt=0;
	string maxString;
	for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
		if(maxCnt<it->second){
			maxCnt=it->second;
			maxString=it->first;
		}
	}
	cout<<maxString<<" "<<maxLength<<endl;

	return 0;
}