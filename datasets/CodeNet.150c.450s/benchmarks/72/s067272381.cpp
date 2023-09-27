#include <iostream>
#include <cctype>
#include <stdio.h>
using namespace std;

int main(){
	char sentence;

	while(true){
		scanf("%c", &sentence);
		if(islower(sentence)){
			sentence = toupper(sentence);
		}else if(isupper(sentence)){
			sentence = tolower(sentence);
		}else{
			sentence = sentence;
		}

		cout << sentence;

		if(sentence == '\n') break;
	}
	return 0;
}