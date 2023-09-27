#include <iostream>
using namespace std;

int main(){

	int a[26]={0};
	char s;

	while(cin >> s){
		if('a'<=s && s<='z'){
			a[s-'a']++;
		}
		else if('A'<=s && s<='Z'){
			a[s-'A']++;
		}
	}


	for(int i=0; i<26; i++){
		cout << (char)(i+'a') << " : " << a[i] << endl; 
	}
}