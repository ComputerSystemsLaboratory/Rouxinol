#include <iostream>
using namespace std;

int main(){
	int n;
	int i = 1;
	int x;
	bool flag1 = false; bool flag2 = false;

	cin >> n;

	for (int i=1; i<=n; i++){
		x = i;
		if(x%3==0){cout << " " << i; continue;}

		do{
			if(x%10 == 3){cout << " " << i; break;}
			x /= 10;
		}while(x);
	}
	cout << endl;

	return 0;
}