#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string w,t;
	cin >> w;
	int count = 0;
	transform(w.begin(),w.end(),w.begin(),::tolower);
	while(cin >> t){
		transform(t.begin(),t.end(),t.begin(),::tolower);
		if( t == "END_OF_TEXT" ) break;
		if( t == w ) count++;
	}
	cout << count << endl;
}