#include <stdio.h>
#include <string.h>
#include <string>
#include <map>
using namespace std;
#define TT 35

map <string, int> S;

int max_len,  max_time;
char str[TT], tmp_max_len[TT], tmp_max_time[TT];

void init(){
	max_len = 0,  max_time = 0;
}

void solve(){
	S[str] ++;
	if (max_time < S[str]){
		strcpy(tmp_max_time, str);
		max_time = S[str];
	}
	int len = strlen(str);
	if (max_len < len){
		strcpy(tmp_max_len, str); 
		max_len = len;
	}
}

int main (){
	init();
	while (~scanf("%s", str)){
		solve();
	}
	printf("%s %s\n", tmp_max_time, tmp_max_len);
	return 0;
}