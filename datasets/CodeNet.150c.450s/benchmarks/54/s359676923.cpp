#include <iostream>
#include <string>
using namespace std;

int main(){
	string ws;
	string strs[1000];
	int i = 0, j, k, counter = 0;
	cin >> ws;
	do{
		cin >> strs[i];
		i++;
	}while(strs[i-1] != "END_OF_TEXT");
	
	for(j = 0; j < ws.length(); j++){
		ws[j] = tolower(ws[j]);
	}
	for(j = 0; j < i; j++){
		for(k = 0; k < strs[j].length(); k++){
			strs[j][k] = tolower(strs[j][k]);
		}
	}
	
	for(j = 0; j < i; j++){
		if(strs[j] == ws){
			counter++;
		}
	}
	
	cout << counter << endl;
	return 0;
}