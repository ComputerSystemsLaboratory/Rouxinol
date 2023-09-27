#include <iostream>
#include <string>
using namespace std;

void convlower(string &a){
	for (int i = 0; i < a.length(); i++){
		if ('A' <= a[i] && 'Z' >= a[i]){
			a[i] = a[i] + 'a' - 'A';
		}
	}
}

int main(){
	string w,t;
	cin >> w;
	convlower(w);
	int count = 0;
	while (cin >> t, "END_OF_TEXT" != t){
		convlower(t);
		count += (t == w);
	}
	cout << count << endl;
}
