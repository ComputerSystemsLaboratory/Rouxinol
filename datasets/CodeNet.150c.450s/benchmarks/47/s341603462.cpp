#include<iostream>
using namespace std;
int main(){
	int W,H,x,y,r;
	
	cin>>W>>H>>x>>y>>r;
	
	if(x<W&&y<H){
		if(x+r<W&&y+r<H){
			if(x>0&&y>0){
			cout<<"Yes"<<endl;
			return 0;;
			}
			}
			}
	else{
		cout<<"No"<<endl;
		return 0;
		 }
		 
	if(x<=W&&y<=H){
		if(x+r<=W&&y+r<=H){
			if(x>0&&y>0){
			cout<<"Yes"<<endl;
			return 0;
			}
		}
		}
	if(x<r||y<r){
		cout<<"No"<<endl;
		return 0;
		}
	
	return 0;
}