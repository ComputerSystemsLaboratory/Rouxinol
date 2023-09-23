#include<iostream>

using namespace std;

int main(void)
{
	int a, b, c, gcd;
	int count;
	while(cin >> a >> b >> c){
		count = 0;
		for(int i = a; i <= b; i++){
			gcd = c%i;
			if(gcd == 0)
			count++;
		}
		cout << count << endl;
	}
	return 0;
}