#include <iostream>
#include <string>
using namespace std;

int main(){
	string w,t;
	int i,count=0;
	cin >> w;
	while(1){
		cin >> t;
		if(t=="END_OF_TEXT"){
			break;
		}
		for(i=0;i<t.length();i++){
			t[i]=tolower(t[i]);
		}
		if(t==w){
			count++;
		}
	}
	cout << count << endl;
	return 0;
	
}