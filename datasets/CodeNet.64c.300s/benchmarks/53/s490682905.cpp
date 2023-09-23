#include <iostream>
using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;
	int i = a;
	int num = 0;

	while(i < b + 1){
		if(c % i == 0){
			num++;
		}
		i++;
	}

	cout << num << endl;

return 0;
}