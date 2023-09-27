#include <iostream>
using namespace std;

int main(){
	int buf;
	bool stud[30];
	
	for(int i = 0; i < 30; i++){
		stud[i] = 0;
	}
	
	for(int i = 0; i < 28; i++){
		cin >> buf;
		stud[buf - 1] = 1;
	}
	
	for(int i = 0; i < 30; i++){
		if(stud[i] == 0){
			cout << i + 1 << endl;
		}
	}
	
	return 0;
}