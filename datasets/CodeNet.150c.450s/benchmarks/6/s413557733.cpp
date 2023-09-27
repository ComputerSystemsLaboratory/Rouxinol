#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main(void){
	int a,b,c;
	cin >> a >> b >> c;
	if(a<b){
		if(b<c){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}else{
		cout << "No" << endl;
	}
	return 0;
}