#include <iostream>

using namespace std;

int research(int n, int s, int v, int t)
{
	if(n == 0 && v == s){
		return 1;
	}
	if(v > s || n < 0){
		return 0;
	}
	int c = 0;
	for(int i = t+1; i <= 9; i++){
		c += research(n-1, s, i+v, i);
	}
	
	return c;
}

int main()
{
	int n, s, c;
	
	while(1){
		cin >> n >> s;
		if(n == 0 && s == 0){
			break;
		}

		c = 0;
		for(int i = 0; i <= 9; i++){
			c += research(n-1, s, i, i);
		}
		
		cout << c << endl;
	}
	
	return 0;
}