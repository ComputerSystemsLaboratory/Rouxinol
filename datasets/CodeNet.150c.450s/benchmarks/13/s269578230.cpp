#include<iostream>
#include<string>
using namespace std;
 
int main() {
	string s,p,S;
	cin >> s;
	cin >> p;

	S = s+s; //??¬?????????????????????

		if( S.find(p) == -1 ){
			cout << "No\n";
		}else{
			cout << "Yes\n";
		}

	return 0;
}