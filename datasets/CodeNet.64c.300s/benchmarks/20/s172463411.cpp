#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	int d;
	while(cin >> d){
		int area = 0;
		for(int i = d; i < 600; i += d){
			area += i * i * d;
		}
		cout << area << endl;
	}
}
