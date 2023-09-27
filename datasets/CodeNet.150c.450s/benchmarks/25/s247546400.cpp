#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char ch;
	int num[26] = {0};

	while(scanf("%c", &ch) != EOF){
		if(ch >= 'A' && ch <= 'Z'){
			ch += 'a' - 'A';
			num[ch - 'a']++;
		}else if(ch >= 'a' && ch <= 'z'){
			num[ch - 'a']++;
		}
	}

	for(int i = 0; i < 26; i++){
		cout << (char)(i + 'a') << " : " << num[i] << endl;
	}
	
	return 0;
}