#include <iostream>
#include <string>
#include <ctype.h>
 
using namespace std;
int main() {
	// your code goes here
	string S;
	int f=0;
	while(cin>>S){
		if(f++){cout<<" ";}
 
		for(int i=0; i<S.size(); i++){
			if(S[i]>='A' && S[i]<='Z'){
				S[i]=tolower(S[i]);
			}else if(S[i]>='a' && S[i]<='z'){
				S[i]=toupper(S[i]);
			}
		}
		cout<<S;
	}
	cout<<endl;
	return 0;
}