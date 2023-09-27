#include <cstdio>
#include <cstring>
using namespace std;
bool d[33554432];
char k[128];


int c(char str[12]){
	int ans = str[0];
	for(int i = 1;i < strlen(str);i++){
		ans <<= 2;
		ans += k[str[i]];
	}
	return ans;
}

int main(){
	k['A'] = 0;k['C'] = 1;k['G'] = 2;k['T'] = 3;
	int n;scanf("%d", &n);
	char s[7], str[12];
	for(int i = 0;i < n;i++){
		scanf("%s %s", s, str);
		if(s[0] == 'i')d[c(str)] = true;
		else puts(d[c(str)] ? "yes" : "no");
	}
	return 0;
}