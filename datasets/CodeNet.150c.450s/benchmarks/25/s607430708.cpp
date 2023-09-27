#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[1400];
	int count[26];
	for(int i = 0;i < 26;i++)
		count[i] = 0;
	while(cin >> ch){
		for(int i = 0;i < strlen(ch);i++){
			if('a' <= ch[i] - '0' <= 'z'){
				int num = ch[i] - 'a';
				count[num]++;
			}
			if('A' <= ch[i] - '0' <= 'Z'){
				int num = ch[i] - 'A';
				count[num]++;
			}
		}
	}
	for(int i=0; i<26; i++){
        cout << (char)(i + 'a') << " : " << count[i] << endl;
	}
	return 0;
}