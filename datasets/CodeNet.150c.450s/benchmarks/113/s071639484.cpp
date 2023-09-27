#include<iostream>
using namespace std;
int main(){
	int x;
	int i=0;
	for(;;){
		
		i++;
		cin>>x;
		if(x==0){
			break;
		}
		cout<<"Case "<<i<<": "<<x<<endl;
	}
}