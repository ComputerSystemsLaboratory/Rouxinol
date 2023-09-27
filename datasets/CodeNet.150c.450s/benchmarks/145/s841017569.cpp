#include<iostream>
#include<cstring>
const int MAX_STR = 35;
const int MAX_NUM_OF_STR = 1010;
using namespace std;

int main(){
	int cnt = -1, len = 0, tango = 0;
	char str[MAX_NUM_OF_STR][MAX_STR], max[MAX_STR], maxlen[MAX_STR];
	
	while(cin >>str[tango]){
		int tmpcnt = 0;
		for(int i = 0; i <= tango; i++){
			if(strcmp(str[i], str[tango]) == 0){
				tmpcnt++;
			}
		}
		if(cnt < tmpcnt){
			strcpy(max, str[tango]);
			cnt = tmpcnt;
		}
		
		if(strlen(str[tango]) > (unsigned)len){
			len = strlen(str[tango]);
			strcpy(maxlen, str[tango]);
		}
		tango++;
	}
	cout <<max <<" " <<maxlen <<endl;
	return 0;
}