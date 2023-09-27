// fakuto.cpp
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	double s;
	cin >> n;
	
	s=sqrt(n);
	cout << n << ":";
	while(true){
		for(int i=2;i<s;i++){
			if(n%i==0){
				cout << " " << i;
				n = n/i;
				i=1;
				continue;
			}
		}
		if(n==1){break;}
		cout << " " << n;
		break;
	}
	cout << endl;
	return 0;
}