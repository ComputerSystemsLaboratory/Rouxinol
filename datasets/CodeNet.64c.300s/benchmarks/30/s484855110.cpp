#include <iostream>

using namespace std;

int main(){
	int pay=0,coin=0;
	while(cin>>pay,pay){
		coin=0;
	pay=1000-pay;
	if(pay/500>=1){
		pay-=500;
		coin++;
	}
	if(pay>=100){
		coin+=pay/100;
		pay-=100*(pay/100);
	}
	if(pay>=50){
		coin+=pay/50;
		pay-=50*(pay/50);
	}
	if(pay>=10){
		coin+=pay/10;
		pay-=10*(pay/10);
	}
	if(pay>=5){
		coin+=pay/5;
		pay-=5*(pay/5);
	}
	if(pay>=1){
		coin+=pay;
	}
	cout<<coin<<endl;
}
}