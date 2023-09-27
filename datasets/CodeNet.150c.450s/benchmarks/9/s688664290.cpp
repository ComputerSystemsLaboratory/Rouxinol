#include <iostream>
#include <string>
using namespace std;

string S;
int n,h;
int main(){
	while(cin >> S && S!="-"){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> h;
			string right = S.substr(0,h);
			string left = S.substr(h,S.size());
			S = left + right;
		}
		cout << S << endl;
	}
}
