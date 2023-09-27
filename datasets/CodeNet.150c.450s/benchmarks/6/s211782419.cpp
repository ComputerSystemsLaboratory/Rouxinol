#include<iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a < b && b < c){
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}	
