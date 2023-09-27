#include <iostream>
using namespace std;

int p[1000000];

int main(){
	for(int i = 0 ; i < 1000000 ; i++) p[i] = 1;
	p[0] = p[1] = 0;
	for(int i = 2 ; i*i < 1000000 ; i++){
		if( p[i] ){
			for(int j = i*i ; j < 1000000 ; j+=i){
				p[j] = false;
			}
		}
	}
	int a,d,n;
	while(cin >> a >> d >> n && (a||d||n) ){
		for(int i = a ; ; i+=d){
			if(p[i]){
				n--;
				if( n == 0 ){
					cout << i << endl;
					break;
				}
			}
		}
	}
}