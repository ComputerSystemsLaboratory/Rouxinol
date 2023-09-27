#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main()
{
	char text[32];
	string str[1001];
	map<string, int> test;
	int i = 0, len = 0, max = 0, now;
	
	while(scanf("%s", text) != EOF){
		str[i] = text;
		
		test[str[i]]++;
		
		now = str[i].size();
		if(max < now){
			len = i;
			max = str[len].size();
		}
		i++;
	}
	now = 0;
	for(i = 0; i < 1001; i++){
		if(test[str[i]] > test[str[now]]){
			now = i;
		}
	}
	
	printf("%s %s\n", str[now].c_str(), str[len].c_str());
	
	
	return(0);
}