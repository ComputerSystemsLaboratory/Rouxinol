#include <iostream>
#include <string>
using namespace std;

string S;
int main(){
	while(1){
		cin >> S;
		if(S[0] == '0') break;
		long long ans = 0;
		for(int i=0;i<S.size();i++){
			ans += S[i] - '0';
		}
		cout << ans << endl;
	}
}
