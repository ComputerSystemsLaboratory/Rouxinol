#include <iostream>
using namespace std;
int main(){
	int x,y,z,i,j;
	j=0;
	cin >>x >>y >>z;
	for(i = x; i <= y ; ++i){
		if( z%i == 0){
			j=j+1;
		};
	};
	cout << j <<endl;
	return 0;
}