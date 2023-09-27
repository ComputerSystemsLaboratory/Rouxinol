#include<string>
#include <iostream>
using namespace std;
int n;
int main(){
	while(true){
		cin >>n;
		
		if(n==0){
			break;
		}
		int num=0;

		for(int k=1;2*n-k*(k+1)>0;k++){
			if((2*n-k*(k+1))%(2*(k+1))==0){
				num++;
			}
		}
		cout << num <<endl;

	}
}