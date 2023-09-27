#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <string>

using namespace std;
		
int main(void){
	char ch;
	int alp[26]={0};
	while( cin >> ch){
		ch = tolower(ch);
		if(islower(ch)){
			alp[ch-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		cout<<(char)('a'+ i)<<" : "<<alp[i]<<endl;
	}
  return 0;
}