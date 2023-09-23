#include <iostream>
using namespace std;

int n,cnt,k,sum;
int main(){
	while(1){
		cin >>n;
		if(n==0)break;
		cnt=0;
		k=0;
		sum=0;
		while(1){
			if(n<sum)break;
			k++;
			sum+=k;
		}
		for(int i=2;i<k;i++){
			if(i%2==0){
				if(n%i==i/2)cnt++;
			}else{
				if(n%i==0)cnt++;
			}
		}
		cout <<cnt <<endl;
	}
	return 0;
}