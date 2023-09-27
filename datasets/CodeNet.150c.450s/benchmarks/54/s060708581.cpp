#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string W, S;
	int cnt = 0;
	cin >> W;
	for(int i=0;i<W.size();i++) W[i]=tolower(W[i]);
	while(1){
		cin >> S;
		if(S == "END_OF_TEXT") break;
		for(int i=0;i<S.size();i++) S[i]=tolower(S[i]);
		if(S == W) cnt++;
	}
	cout << cnt << endl;
}