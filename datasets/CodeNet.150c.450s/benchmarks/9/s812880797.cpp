#include <cstdio>
#include <string>
using namespace std;
char word[201];

void copy_word(char* s, char* t, int n){
	//source t:new
	for(int i = 0; i<n; ++i){
		t[i] = s[i];
	}
}

int main(){
	while(1){
		scanf("%s", word);
		if(word[0] == '-'){
			break;
		}
		/*int length;
		length = strlen(word);*/
		
		int length =0;
		while(word[length]!='\0'){
			++length;
		}
		
		int m, b;
		char new_word[201];
		scanf("%d", &m);
		
		for(int i=0; i<m; ++i){
			scanf("%d", &b);
			copy_word(word+b,new_word,length-b);
			copy_word(word,new_word+length-b,b);
			copy_word(new_word,word,length);
		}
		printf("%s\n", word);
		
	}
}
