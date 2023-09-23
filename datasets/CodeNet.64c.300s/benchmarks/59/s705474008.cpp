#include<iostream>
#include<math.h>
using namespace std;

int prime (int p){
	int i,flag=0;
	if (p==2){
		return 0;
	}else{
		for (i=2;i<=sqrt(p);i++){
			if (p%i==0){
				flag=1;
				break;
			}
		}
		return flag;
	}
} 

int main(){
	int n,i,p,P=0;
	cin >> n;
	for (i=1;i<=n;i++){
		cin >> p;
		P=P+prime(p);
	}
	cout << n-P << endl;
}