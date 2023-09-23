#include <iostream>
using namespace std;

int main(){
	int n, x, count;

	do{
		cin >> n >> x;
		count = 0;
		if(n==0 & x == 0) break;
		for(int a=1; a<=n; a++){
			for(int b=1; b<=n; b++){
				if(b==a) continue;
				for(int c=1; c<=n; c++){
					if(c==b|c==a) continue;
					if( a+b+c==x) count++;
				}
			}
		}
		cout << count / 6  << endl;
	}while(1);
	return 0;
}