#include <iostream>
#include <cctype>
using namespace std;

int main(){
	int Case[26]={0};
	char c , lc;
	while (cin>>c){
		if(isalpha(c)){
			if(c<='Z'){
				Case[c-'Z'+25]++;
			} else {
				Case[c-'z'+25]++;
			}
		}
	}
	for(int i=0 , lc='a' ; i<26 ; i++ , lc++){
			cout << (char)lc << " : " << Case[i] << endl;
		}
	return 0;
}