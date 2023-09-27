#include<iostream>
using namespace std;

int main(void){
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	while(!(a == -1 && b == -1 && c == -1)){
		if(a == -1 || b == -1){
			cout << "F" << endl;
		}else if(a + b >= 80){
			cout << "A" << endl;
		}else if(a + b >= 65){
			cout << "B" << endl;
		}else if(a + b >= 50){
			cout << "C" << endl;
		}else if(a + b >= 30){
			if(c >= 50){
				cout << "C" << endl;
			}else{
				cout << "D" << endl;
			}
		}else{
			cout << "F" << endl;
		}
		cin >> a >> b >> c;
	}
	return 0;
}