#include <bits/stdc++.h>
#define fo(i,a) for(i = 0;i < a;i++)
using namespace std;
int main(void)
{
	int n,a=0,b=0,x,y,i;
	
	cin >> n ;
	while(n != 0){
		fo(i,n){
			cin >> x >> y ;
			if(x > y) a += x + y ;
			else if(x < y) b += x + y ;
			else{
				a += x ;
				b += y ;
			}
		}
		
		cout << a << " " << b << endl ;
		a = 0 ;
		b = 0 ;
		cin >> n ;
	}
	
	return 0;
}