#include <iostream>
using namespace std;

int main(){
	int d;

	while(cin >> d){
		int area = 0;
		for(int x = d; x <= 600-d; x += d){
			area += x * x * d;
		}
		cout << area << endl;
	}

	return(0);
}