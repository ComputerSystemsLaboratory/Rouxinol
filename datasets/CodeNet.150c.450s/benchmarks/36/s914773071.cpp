#include <iostream>
using namespace std;

int main(){
	int n;
	while( cin >> n ){
		int area = 0;
		for( int i = 0; i*n < 600; i++ ){
			area += (i*n)*(i*n)*n;
		}
		cout << area << endl;
	}
}