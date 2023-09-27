#include <iostream>
using namespace std;

bool check(int n)
{
	if(n==1) return false;
	for(int i=2;i*i<=n;i++){
		if( n%i==0 ) return false;
	}	
	return true;
}

int main() {
	while(true){
		int a,d,n;
		cin >> a >> d >> n;
		if(a==0&&d==0&&n==0)break;
		while(n>0){
			if( check(a) ){
				n--;
				if(n==0){
					cout << a << endl;
					break;
				}
			}
			a+=d;
		}
	}
	// your code goes here
	return 0;
}