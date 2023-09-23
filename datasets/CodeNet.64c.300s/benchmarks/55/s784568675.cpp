#include<iostream>
using namespace std;
int main(){
int x,a=0;	
	while(cin>>x){
		if(x==0){
			break;	
		}
			a++;
			cout<<"Case"<<" "<<a<<":"<<" "<<x<<endl;
	}
return 0;
}