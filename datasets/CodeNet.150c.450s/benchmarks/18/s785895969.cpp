#include <iostream>
#include <string>
using namespace std;

int main()
{
    int b,n,m=100000;
	cin >> n;
	for(int i=0 ; i<n ; i++){
		m*=1.05;
		b=m%1000;
		if(b>=1){
			m+=1000;
			m-=b;
		}
	}
	cout << m << endl;
	return 0;
}