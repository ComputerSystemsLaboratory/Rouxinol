#include <iostream>

using namespace std;

int main(){
	int a;
	int i=1;
	
	while(1){
		cin >> a;
		if(a == 0){
			break;
		}
		else{
			cout << "Case" << " " << i << ":" << " " << a << endl;
			i++;
		}
}
}