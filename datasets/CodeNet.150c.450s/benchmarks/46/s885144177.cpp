#include<iostream>
using namespace std;
int main(){
	while(1){
	int n,x,y;
	int z=0;
	int i,j,k;

		cin >> n >> x;
		if((n == 0)&&(x == 0)) break;

		for(i=1; i<=n; i++){
			for(j=1; j<i; j++){
				for(k=1; k<j; k++){

					y = i + j + k;
					if(y == x) z++;

				}
			}
		}

		cout << z << endl;
	}

	return 0;
}