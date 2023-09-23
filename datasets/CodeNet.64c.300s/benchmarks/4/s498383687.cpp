#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cin >> a >> b >> c;
	
	if (a<b){
		if(b<c){
			cout << "Yes" << endl;
		}else if(b>c){
			cout << "No" << endl;
		}
	}else{
		cout << "No" << endl;
	}
	return 0;
}