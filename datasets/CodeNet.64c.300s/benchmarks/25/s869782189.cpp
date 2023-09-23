#include <iostream>
#include <string>
using namespace std;

int main(){
	int a[4], b[4], hit, blow, n1[10], n2[10];

	while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]){
		hit = 0;
		blow = 0;
		for(int i=0 ; i<10 ; i++){
			n1[i] = 0;
			n2[i] = 0;
		}

		for(int i=0 ; i<4 ; i++){
			if(a[i]==b[i]) hit++;
			n1[ a[i] ] = 1;
			n2[ b[i] ] = 1;
		}
		for(int i=0 ; i<10 ; i++){
			if( n1[i]==n2[i] && n1[i]==1) blow++;
		}
		cout << hit << " " << blow-hit << endl;
	}
}