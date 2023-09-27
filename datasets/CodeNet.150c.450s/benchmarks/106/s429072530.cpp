#include <iostream>
using namespace std;

int main(){
	int a, b, c, count = 0;
	bool divi[10001] = { false };
	
	cin >> a >> b >> c;
	for(int i = 1; i <= c; i++){
		if(c % i == 0){
			divi[i] = true;
		}
	}
	for(int i = a; i <= b; i++){
		if(divi[i] == true){
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}