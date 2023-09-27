#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n;
	int d=100000;
	cin >> n;
	for(int i = 0; i < n; i++){
		d=d*1.05;
		if(d%1000!=0)d+=1000-d%1000;
	}
	cout << d << endl;

	return 0;
}