#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	string *registeredID = new string[n];
	for(int i=0;i<n;i++){
		cin >> registeredID[i];
	}
	sort(registeredID, registeredID+n);
	int m;
	cin >> m;
	string *cardID = new string[m];
	for(int i=0;i<m;i++){
		cin >> cardID[i];
	}
	bool isOpen = false;
	for(int i=0;i<m;i++){
		bool contains = binary_search(registeredID,registeredID+n, cardID[i]);
		if(contains==true){
			if(isOpen == true){
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