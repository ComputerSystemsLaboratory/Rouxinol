#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,i;
	i=0;
	cin >> a >> b >> c;
	while(a<=b){
		d=c%a;
		if(d!=0){
		}
		else{
			i++;
		}
		a++;
	}
	cout << i << endl;
}
