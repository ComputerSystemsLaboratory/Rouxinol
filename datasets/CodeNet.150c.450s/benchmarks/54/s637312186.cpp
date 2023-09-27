#include <iostream>
#include <string>
using namespace std;

int main(void){
	string w, t, end="end_of_text";
	int count=0;
	cin >>t;
	for(int i=0; i<t.size(); i++){
		t[i]=tolower(t[i]);
	}
	while(1){
		cin >>w;
		if(w=="END_OF_TEXT"){
			break;
		}
		for(int i=0; i<w.size(); i++){
			w[i]=tolower(w[i]);
		}
		if(w==t){
			count++;
		}
		
	}
	cout <<count <<endl;
    return 0;
}