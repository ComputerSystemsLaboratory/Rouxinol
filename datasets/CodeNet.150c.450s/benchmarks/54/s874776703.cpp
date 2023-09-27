#include<bits/stdc++.h>
using namespace std;

int main(){
	int count = 0;
	string W, T, E = "END_OF_TEXT";
	cin>>W;
	
	while(1){
		int i = 0,j = 0;
		cin>>T;
		if((int) E.size() == (int) T.size()){
			for(i = 0; i < (int) E.size(); i++){
				if(E[i] != T[i]) break;
			}		
		}
		if(i == E.size()) break;
		
		if((int)W.size() == (int)T.size()){
			for(i = 0; i < (int) W.size(); i++){
				if(isupper(T[i])) T[i] = tolower(T[i]);
				if(W[i] != T[i]) break;
			}
			if(i == (int)W.size()) count++;
		}
		
	}
	cout<<count<<endl;

	return 0;
}
