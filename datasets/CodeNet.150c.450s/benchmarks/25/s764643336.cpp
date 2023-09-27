#include <iostream>
#include <map>
using namespace std;

int main(){
	map<char, int> m;
	string s;
	while(cin >> s){
		for(char c:s) m[c]++;
	}
	for(char a = 'a', A = 'A'; a <= 'z'; a++, A++){
		cout << a << " : " << m[a] + m[A] << endl;
	}
}