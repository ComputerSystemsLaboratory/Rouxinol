#include<iostream>
using namespace std;
	
int main(){
	int num;
	
	cin >> num ;

	cout << num / 3600 << ":" << (num % 3600) / 60 << ":" << num % 60 <<endl;
 
	
	return 0;
}