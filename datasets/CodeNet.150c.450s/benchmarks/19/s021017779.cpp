#include<iostream>
using namespace std;
int main(){
	int x[3100];
	int y[3100];
	int i=0;
	int h=0;
	for(h=0;h<3050;h++){
		cin>>x[h]>>y[h];
		if(x[h]==0&&y[h]==0){
			break;
		}
		i++;
	}
	for(h=0;h<i;h++){
		if(x[h]<=y[h]){
			cout<<x[h]<<" "<<y[h]<<endl;
		}else{
			cout<<y[h]<<" "<<x[h]<<endl;
		}
	}
}