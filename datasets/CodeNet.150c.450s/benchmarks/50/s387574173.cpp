#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	while(x!=0){
		
	int n=0;
	x=1000-x;
	
	if(x>=500){
		n=x/500;
		x=x%500;
	}
	if(x>=100){
		n+=x/100;
		x=x%100;
	}
	if(x>=50){
		n+=x/50;
		x=x%50;
	}
	if(x>=10){
		n+=x/10;
		x=x%10;
	}
	if(x>=5){
		n+=x/5;
		x=x%5;
	}
	if(x>=1){
		n+=x/1;
	}
	if(x==1){
		n=1;
	}
	cout<<n<<endl;
	cin>>x;
	}
	
	
	return 0;
}