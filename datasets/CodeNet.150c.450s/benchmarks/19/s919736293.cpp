#include<iostream>
using namespace std;
int main(){

	int x,y;
	cin>>x>>y;
	
	for(int i=1;x>0||y>0;i++){
		if(x<y){
			cout<<x<<" "<<y<<endl;
		}
		if(y<x){
			cout<<y<<" "<<x<<endl;
		}
		if(x==y){
			cout<<x<<" "<<y<<endl;
		}
		cin>>x>>y;
	}
	return 0;
}