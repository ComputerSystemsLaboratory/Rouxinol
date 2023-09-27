#include <iostream>

using namespace std;

int main(){
	int n;
	double x[100],y[100];
	cin>>n;
	while(n>0){
		for(int i=0;i<4;i++)cin>>x[i]>>y[i];
		if((y[0]-y[1])/(x[0]-x[1])==(y[2]-y[3])/(x[2]-x[3])){
			cout<<"YES"<<endl;
			n--;
		}
		else {
			cout<<"NO"<<endl;
			n--;
		}
	}
}