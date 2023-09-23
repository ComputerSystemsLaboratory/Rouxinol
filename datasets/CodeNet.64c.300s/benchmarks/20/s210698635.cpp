#include <iostream>

using namespace std;
typedef long long ll;
#define square(x) (x)*(x)

int main(){
	int x;
	ll area = 0;
	while(cin >> x){
		area = 0;
		for(int i = 1;i*x<600;i++){
			area += square(i*x)*x;
		}
		cout << area << endl; 
	}
}