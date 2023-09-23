#include <iostream>
using namespace std;
int main(){
	int W,H,x,y,r;
	cin>>W>>H>>x>>y>>r;
	
	W=W-r;
	H=H-r;
	if(x>=r && x<=W){
		if(y>=r && y<=H){
			cout<<"Yes"<<endl;
			
		}else{cout<<"No"<<endl;}
	}else{cout<<"No"<<endl;}
	
	
	
	
	
}
