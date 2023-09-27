#include<iostream>
using namespace std;

int main(){
	int a, b, count = 1, total;

	while(cin >> a >> b){
		total = a + b;
		while(total/10 != 0){
			total /= 10;
			count++;
		}
		cout << count << endl;
		count = 1;
	}
}