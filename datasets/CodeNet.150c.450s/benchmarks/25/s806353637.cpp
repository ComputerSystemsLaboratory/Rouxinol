//ITP1_8_C
#include<iostream>
#include<stdio.h>
using namespace std;
	
int moji[26];

int main(){
	int i;
	char ch;
	
	while(cin>>ch){
		if('a'<=ch&&ch<='z')
			moji[ch-'a']++;
			
		else if('A'<=ch&&ch<='Z')
			moji[ch-'A']++;
		else if(ch==EOF)
			break;
	}
	
	for(i=0;i<26;i++)
		cout<<(char)('a'+i)<<" : "<<moji[i]<<endl;
	
	return 0;
}