#include <iostream>
using namespace std;

int main(){

	int a,b,GCD,LCM,c;

	while(cin>>a>>b){

		if(a>b){
			c=b;
		}
		else{
			c=a;
		}

		for(int i=1;i<=(c/2+1);i++){
			if(b%i==0 && a%i==0){
				GCD = i;
			}
		}
		if(b%a==0 || a%b==0){
			GCD = c;
		}
		LCM=a/GCD*b;
		cout<<GCD<<" "<<LCM<<endl;
	}

	return 0;
}