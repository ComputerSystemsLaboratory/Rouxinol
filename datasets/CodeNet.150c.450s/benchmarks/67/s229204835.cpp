#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(){
	int a, b, c;
	while (1){
		cin >> a;
		if (!a){
			break;
		}
		int count = 0;
		for (size_t i = 2; i<a; i++){
			double x = (double)a / i;
			if (x - (double)i / 2 < 0){
				break;
			}
			if ((x - (int)x)==0.0&&i%2==1){
				count++;
				//cout << "!" <<x<< endl;
			}
			else if (x - (int)x == 0.5&&i%2==0){
				count++;
				//cout << "?" <<x<< endl;
			}
		}
		cout <<count << endl;
	}
}