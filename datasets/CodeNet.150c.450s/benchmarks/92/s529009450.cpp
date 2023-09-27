#include <iostream>
using namespace std;
int ans[10];

int main() {
	int a,b;
	while(cin >> a >> b){
		if(cin.eof())break;
	int sum = a+b;
	int j=1;
	int i=1;

	while(i){
		if(sum/=10){
			j++;
		}else{
			cout << j << "\n";
			break;
		}
	}
	}
	return 0;
}