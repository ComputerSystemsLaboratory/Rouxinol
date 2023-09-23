#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n, m, c, j;
	
	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		m = 1000-n;
		c = 0;
		
		for(int i = 100; m != 0; i /= 10){
			j = 5 * i;
			if(m >= j){
				m -= j;
				c++;
			}
		
			while(m >= i){
				m -= i;
				c++;
			}
		}
		
		cout << c << endl;
	}
	
	return 0;
}