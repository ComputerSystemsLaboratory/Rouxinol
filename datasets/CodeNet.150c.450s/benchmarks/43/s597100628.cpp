#include<iostream>
using namespace std;

int a,b,n,ta,tb;

int main(){
	while(true){
		a=0; b=0;
		cin >> n;
		if(!n)
			return 0;
		for(int i=0; i<n; i++){
			cin >> ta >> tb;
			if(ta>tb)
				a+=ta+tb;
			else if(ta==tb){
				a+=ta;
				b+=tb;
			}else
				b+=ta+tb;
		}
		cout << a << ' ' << b << endl;
	}
}