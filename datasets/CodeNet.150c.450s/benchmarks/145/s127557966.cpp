#include<iostream>
#include<string>
#include<map>
using namespace std;

const int MAX_NUM_OF_STR = 1010;

int main(){
	int len = 0, tango = 0;
	string str[MAX_NUM_OF_STR], max, maxlen;
	map<string, int> string_cnt;
	
	while(cin >>str[tango]){
		string_cnt[str[tango]]++;
		
		if(str[tango].size() > (unsigned)len){
			len = str[tango].size();
			maxlen = str[tango];
		}
		tango++;
	}
	
	map<string, int>::iterator it = string_cnt.begin();
	int cnt = -1;
	string tmp;
	for(int i = 0 ; i < string_cnt.size(); it++, i++){
		if((*it).second > cnt){
			cnt = (*it).second;
			tmp = (*it).first;
		}
	}
	max = tmp;
	
	cout <<max <<" " <<maxlen <<endl;
	return 0;
}