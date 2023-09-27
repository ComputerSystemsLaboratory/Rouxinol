#include <iostream>
using namespace std;

int main(){
				int a,b,c;
				cin >> a >> b >> c;

				int i = 0;
				int x;
				while(i < 2){
						if(a > b){
									x = a;
									a = b;
									b = x;
						}
						if(b > c){
									x = b;
									b = c;
									c = x;
						}
						if(a > c){
									x = a;
									a = c;
									c = x;
						}
						i += 1;
				}
				cout << a << " " << b << " " << c << endl;
}

