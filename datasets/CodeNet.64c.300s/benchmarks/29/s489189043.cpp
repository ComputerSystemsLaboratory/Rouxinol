#include<iostream>
#include<math.h>
using namespace std;

int main(void){
	long e,x,y,z,m,temp;

	while(1){
		cin >> e;
		if(e==0)break;
		
		m=e;
		for(z=0; z*z*z<=e; ++z){
			for(y=0; y*y+z*z*z<=e; ++y){
				x = e-(y*y)-(z*z*z);
				m = min(m,x+y+z);
			}
		}

		cout << m << endl;
	}

	return 0;
}