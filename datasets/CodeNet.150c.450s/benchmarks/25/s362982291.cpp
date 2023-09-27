#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char ch;
	int count[26] = {0};

	while(cin>>ch){
		if(isupper(ch)) ch = tolower(ch);
		count[ch-'a']++;
	}
	
	for(int i=0;i<26;i++){
		cout<<(char)(i+'a')<<" : "<<count[i]<<endl;
	}
	return 0;
}