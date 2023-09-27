#include<iostream>
#include<string>
#include<math.h>
using namespace std;

bool p[1000000];

int main(){
	int c,n;
	while(cin >> n){
		c = 0;
		for(int i = 2; i <= sqrt(n); i++){
			for(int j = 2; i * j <= n; j++){
				p[i*j] = true;
			}
			
		}
		for(int i = 2; i <= n; i++){
			if(p[i] == 0){
				c++;
				
			}
		}
		cout << c << endl;
	}
	
	return 0;
}