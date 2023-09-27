#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
using namespace std;
string S,T;
int main(){
	cin >> S;
	int count = 0;
	while(cin >> T && T != "END_OF_TEXT"){
		for(int i=0;i<T.size();i++){
			T[i] = tolower(T[i]);
		}
		if(T == S) count++;
	}
	cout << count << endl;
}
