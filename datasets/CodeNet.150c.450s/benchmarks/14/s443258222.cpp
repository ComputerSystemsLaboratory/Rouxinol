#include <iostream>

using namespace std;

bool three(int n);

int main(void){
	int n;

	cin >> n;
	for(int i = 3; i <= n; i++)
		if(three(i))
			cout << " " << i;
	cout << endl;
}

bool three(int n){
	if(!(n%3))
		return true;
	do{
		if(n%10 == 3)
			return true;
	}while(n /= 10);

	return false;
}

