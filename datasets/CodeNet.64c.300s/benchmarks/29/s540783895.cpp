#include <iostream>
#include <math.h>
using namespace std;
int main(){
//	FILE* fp_in = freopen("2012_input.txt", "r", stdin);
//	FILE* fp_out = freopen("result.txt", "w", stdout);

	int x,sum;
	int e;
	while(1) {
		int max = 1000000;
		cin >>e ;
		if(e == 0) break;
		for(int i=0;i*i*i<=e;i++){
			for(int j=0;j*j<=e-i*i*i;j++){
				x = e-i*i*i-j*j;
				sum = x+i+j;
				if (sum<max) max =sum;
			}
		}
		cout << max <<endl;
	}
//	fclose(fp_in);
//	fclose(fp_out);

		return 0;
}