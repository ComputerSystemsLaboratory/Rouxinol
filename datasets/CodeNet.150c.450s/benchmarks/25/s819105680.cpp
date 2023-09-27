#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	int count['z' - 'a' + 1];
	for(char c = 'a'; c <= 'z'; c++){
		count[c - 'a'] = 0;
	}
	while(!cin.eof()){
		char c = cin.get();
		if ('A' <= c && c <= 'Z'){
			count[c - 'A']++;
		} else if ('a' <= c && c <= 'z'){
			count[c - 'a']++;
		} 
	}
	for(char c = 'a';c <= 'z'; c++){
		cout << c << " : " << count[c - 'a'] << endl;
	}
}