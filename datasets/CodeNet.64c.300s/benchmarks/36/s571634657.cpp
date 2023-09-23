#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;

	if(a < b){
		swap(a,b);
	}if(b < c){
		swap(b,c);
	}if(a < b){
		swap(a,b);
	}
	cout << c <<" "<< b <<" "<< a << endl;
	return 0;
}