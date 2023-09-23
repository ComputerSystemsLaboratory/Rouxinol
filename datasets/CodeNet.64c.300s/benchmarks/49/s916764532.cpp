#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int a,b,tmp,count;
	while(cin >> a >> b){
		count = 0;
		tmp = a + b;
		while(tmp > 0){
			count++;
			tmp /= 10;
		}
		cout << count << endl;
	}
}