#include <iostream>

using namespace std;

bool prime(int n)
{
	if(n < 2){
		return false;
	} else if(n == 2){
		return true;
	} else if(n%2 == 0){
		return false;
	}
	
	for(int i = 3; i*i <= n; i+=2){
		if(n%i == 0){
			return false;
		}
	}
	
	return true;
}

int main(int argc, char **argv)
{
	int a, d, n, c, j;
	
	while(1){
		cin >> a >> d >> n;
		if(a == 0){
			break;
		}
		c = 0;
		j = 0;
		while(c != n){
			if(prime(a+j*d)){
				c++;
			}
			j++;
		}
		j--;
		cout << a+j*d << endl;
	}
	return 0;
}