#include <iostream>
using namespace std;

int main(){
	int a=0,b=0;
	int na,nb;
	int nc;
	while(1){
	cin>>nc;
	if(nc==0) break;
	a=b=0;
	for(int i=0;i<nc;i++){
		cin>>na>>nb;
		if(na>nb) a+=(na+nb);
		else if(na<nb) b+=(na+nb);
		else {a+=na;b+=nb;}
	}
	cout<<a<<" "<<b<<endl;
	}
	return 0;
}