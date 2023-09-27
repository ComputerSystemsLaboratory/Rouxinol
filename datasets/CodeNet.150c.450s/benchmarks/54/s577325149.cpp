#include <bits/stdc++.h>
using namespace std;

int main(){

string W; cin >> W;
string T;

for(int i=0;i<W.length();i++){
	if(!(islower(W[i])))
		W[i]=tolower(W[i]);
}
int cnt = 0;
while(cin >> T, T != "END_OF_TEXT"){
	for(int i=0; i<T.length(); i++){
		if(!(islower(T[i])))
			T[i]=tolower(T[i]);
	}
	if(W==T)
		cnt++;
}
cout << cnt << endl;

return 0;
}