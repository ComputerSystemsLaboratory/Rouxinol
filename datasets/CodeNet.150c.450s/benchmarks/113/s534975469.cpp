#include<iostream>

using namespace std;

int main(){
	
	int x,i;
	i=0;
	for(;;){
		cin>>x;
		i=i+1;
		if(x==0)break;
		else{
			cout<<"Case "<<i<<": "<<x<<endl;
		}
	}
	return 0;

}