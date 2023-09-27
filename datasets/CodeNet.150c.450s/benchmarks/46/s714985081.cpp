#include <iostream>
using namespace std;
int main(){
	int n,x,y;
	while(true){
		y=0;
		cin >>n >>x;
		if(n==0 && x==0){
			break;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				for(int k=1;k<j;k++){
					if(i+j+k==x){
						y +=1;
					}
				}
			}
		}
		cout << y << endl;
	}
}