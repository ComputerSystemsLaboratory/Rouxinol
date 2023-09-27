#include<iostream>
using namespace std;

int Keisan(int a);
int main(){
	int x = 0;
	cin >> x;
	cout << Keisan(x) << endl;
	return 0;
}

int Keisan(int a){
	return a*a*a;
}