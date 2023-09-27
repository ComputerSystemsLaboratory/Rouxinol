#include<cstdio>
#include<cstring>

int main(){
	char word[380][33];
	int count[380] = {};
	int now = 0;
	int max = 0;
	int a, b = 0;
	char s[33];
	while(scanf("%s", &s) + 1){
		int t = 0;
		while(s[t]){
			if('A' <= s[t] && s[t] <= 'Z'){
				s[t] = s[t] + 'a' - 'A';
			}
			t++;
		}
		bool flug = true;
		for(int i = 0; i < now; i++){
			if(strstr(word[i], s)){
				count[i]++;
				if(count[i] > max){
					max = count[i];
					a = i;
				}
				flug = false;
				break;
			}
		}
		if(flug){
			strcpy(word[now], s);
			if(strlen(word[b]) < strlen(s)){
				b = now;
			}
			now++;
		}
	}
	printf("%s %s\n", word[a], word[b]);
	return 0;
}