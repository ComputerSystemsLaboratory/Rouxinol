#include<iostream>
#include<string>
const int MAX_NUM_OF_STR = 1010;
using namespace std;

int main(){
	int cnt = -1, len = 0, tango = 0;
	string str[MAX_NUM_OF_STR], max, maxlen;
	
	while(cin >>str[tango]){
		int tmpcnt = 0;
		for(int i = 0; i <= tango; i++){
			if(str[i] == str[tango]){
				tmpcnt++;
			}
		}
		if(cnt < tmpcnt){
			max = str[tango];
			cnt = tmpcnt;
		}
		
		if(str[tango].size() > (unsigned)len){
			len = str[tango].size();
			maxlen = str[tango];
		}
		tango++;
	}
	cout <<max <<" " <<maxlen <<endl;
	return 0;
}