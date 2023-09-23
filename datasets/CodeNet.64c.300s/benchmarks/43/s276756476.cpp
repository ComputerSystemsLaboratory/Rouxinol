#include<iostream> 
using namespace std;

int main(){
	int a[4];
	int b[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	cin>>b[0]>>b[1]>>b[2]>>b[3];
	int S;
	int T;
	S = a[0]+a[1]+a[2]+a[3];
	T = b[0]+b[1]+b[2]+b[3];
	if(S>=T){
		cout<<S<<endl;
	}
	else{
		cout<<T<<endl;
	}	
	return 0;
}