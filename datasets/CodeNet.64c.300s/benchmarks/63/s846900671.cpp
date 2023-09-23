#include<iostream>
using namespace std;

int main(){
	long int ggd[200],num1,num2,lcm[200];
	int a,b;
	int i=0;
	
	while(cin >> a >> b){
		num1 = a;
		num2 = b;
	
		if( a<b ){
			num2 = a;
			num1 = b;
		}
		
		while( (ggd[i]=num1%num2) != 0){
			num1 = num2;
			num2 = ggd[i];
		}
		ggd[i] = num2;
		lcm[i] = a / ggd[i] * b;
		i++;
	}
	
	for(int j=0; j<i; j++)
		cout << ggd[j] <<" "<< lcm[j] << "\n";
	
	return 0;
}