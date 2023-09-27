#include <iostream>
#include <cctype> //is,to upper,lower
#include <string>
using namespace std;

int main(){
	string S;
	getline(cin, S);
	for(int i=0;S[i];i++){
		if(islower(S[i])){
			S[i]=toupper(S[i]);
		}
		else if(isupper(S[i])){
			S[i]=tolower(S[i]);
		}
	}
	cout << S << endl;
	return 0;
}