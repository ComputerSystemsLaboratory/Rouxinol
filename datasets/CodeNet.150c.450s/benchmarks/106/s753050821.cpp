#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	int n;
	cin>> a >> b >> c;
	while(1){
		if(c%a==0){
			n++;
		}
		a++;
		if(a > b) break;
	}
	cout<< n << endl;
}