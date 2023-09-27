#include <iostream>
#include <string>

using namespace std;
int main(){
	string a;
	string b;
	int counter = 0;
	cin >> a;
	int l = a.size();

	while(1){
		cin >> b;
		if(b == "END_OF_TEXT"){
			break;
		}
		int lb= b.size();
		for(int i=0;i<l;i++){
			if(l !=lb){
				break;
			}
			if(a[i] != tolower(b[i])){
				break;
			}
			if(i == l-1){
				counter++;
			}
		}

	}
	cout << counter <<"\n";
	return 0;
}