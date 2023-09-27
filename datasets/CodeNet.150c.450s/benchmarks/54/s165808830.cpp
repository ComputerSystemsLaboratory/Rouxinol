#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string t, w;
	int count = 0;
	cin >> w;
	for(int i= 0; i < (int)w.size(); i++){
		w[i] = toupper(w[i]);
	}
	
	while(1){
		cin >> t;
		if(t.find("END_OF_TEXT") != string::npos) break;
		
		for(int i = 0; i < (int)t.size(); i++){
			t[i] = toupper(t[i]);
		}
		if(t == w) count++;
		
	}
	
	cout << count << endl;
	
	return 0;
}