#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main(){
	int n;scanf("%d", &n);
	char s[7], str[13];
	map<string, int> m;
	for(int i = 0;i < n;i++){
		scanf("%s %s", s, str);
		if(s[0] == 'i')m[str] = 1;
		else puts(m[str] ? "yes" : "no");
	}
	return 0;
}
//1.78