#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char ch;
	int counter[26]={},num;
	
	while(scanf("%c",&ch)!=EOF){
		if(isupper(ch)){
			ch=tolower(ch);
		}
		num = ch -'a';
		counter[num]++;
	}
	
	for(int i=0;i<26;i++){
		cout << char('a'+i) << " : " << counter[i] << endl;
	}
	return 0;
}