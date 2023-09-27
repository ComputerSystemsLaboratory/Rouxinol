#include <iostream>
#include <string>
using namespace std;

int main(){
	string W, text;
	int count = 0;

	cin>>W;
	for(int i=0;i<W.length();i++){
		if(isupper(W[i])) W[i] = tolower(W[i]);
	}

	while(cin>>text && text != "END_OF_TEXT"){
		for(int i=0;i<text.length();i++){
			if(isupper(text[i])) text[i] = tolower(text[i]);
		}

		if(W == text) count++;
	}

	cout<<count<<endl;

	return 0;
}