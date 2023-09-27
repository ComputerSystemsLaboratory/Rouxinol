#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
long long int tks(long long int D,long long int ans){
	int y=D;
	ans+=D*D*y;
	
	


}
*/
int main(){
	
	
	int D=0;
	
	while(cin>>D){
long long int ans=0;
int y=0;
	while(1){
		y+=D;
		if(y>=600)break;
		ans+=y*y*D;
	}
	cout<<ans<<endl;}
	return 0;
}
	