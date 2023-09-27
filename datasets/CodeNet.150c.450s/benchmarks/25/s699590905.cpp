#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	char eigo;
	int mozi[26];
	for(int dor = 0;dor < 26;dor++)mozi[dor] = 0;
	while(cin >> eigo){
		if(eigo >= 'a' && eigo <= 'z'){
			eigo -= 'a';
		}else if(eigo >= 'A' && eigo <= 'Z'){
			eigo -= 'A';
		}
		mozi[eigo]++;
	}
	for(int dor = 0;dor < 26; dor++)printf("%c : %d\n",dor+'a',mozi[dor]);
	return 0;
}