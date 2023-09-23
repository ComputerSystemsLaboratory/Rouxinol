#include <iostream>
using namespace std;

int main(void){
	int n, x, cnt=0;
	while(1){
		cin >>n >>x;
		if(n==0 && x==0){
			break;
		}
		for(int i=1; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				for(int k=j+1; k<n+1; k++){
					if(i+j+k==x){
						cnt++;
					}
				}
			}
		}
		cout <<cnt <<endl;
		cnt=0;
	}
    return 0;
}