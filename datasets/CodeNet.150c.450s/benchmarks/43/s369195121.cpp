#include <iostream>
using namespace std;

int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		int a = 0;
		int b = 0;
		for(int i=0;i<n;i++){
			int c,d;
			cin >> c >> d;
			if(c==d){
				a += c;
				b += c;
			}
			else if(c>d) a += c+d;
			else b += c+d;
		}
		cout << a << " " << b << endl;
	}
}