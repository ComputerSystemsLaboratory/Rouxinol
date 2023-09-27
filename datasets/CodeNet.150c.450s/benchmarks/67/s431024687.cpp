#include <iostream>
#include <math.h>
using namespace std;
int main(){
	while(1){
		int i;
		cin >> i;
		if (i==0) {break;}
		int count = 0;
		for(int j=1;j<i;j++){
			
			for(int k=1;k<i;k++){
				int sum =0;
				for(int l=0;l<k;l++){
					sum +=j+l;
				}
				if (sum == i) {
					count +=1;
					break;
				}
			}
		}
		cout << count <<endl;
	}



	return 0;
}