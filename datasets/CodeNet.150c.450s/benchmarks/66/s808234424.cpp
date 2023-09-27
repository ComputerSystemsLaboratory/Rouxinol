#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	int n;
	cin >> n;
	char registeredID[256][11];
	for(int i=0;i<n;i++){
		cin >> registeredID[i];
	
	}
	int m;
	cin >> m;
	char cardID[256][11];
	for(int i=0;i<m;i++){
		cin >> cardID[i];
	}
	bool isOpen = false;
	for(int i=0;i<m;i++){
		bool contains = false;
		for(int j=0;j<n;j++){
			if(strcmp(cardID[i], registeredID[j])==0){
				//一致している
				contains = true;
				break;
			}
		}
		if(contains==true){
			if(isOpen==true){
				cout << "Closed by " << cardID[i] << endl;
				isOpen = false;
			}else{
				cout << "Opened by " << cardID[i] << endl;
				isOpen = true;
			}
		}else{
			cout << "Unknown " << cardID[i] << endl;
		}
	}
	return 0;
}