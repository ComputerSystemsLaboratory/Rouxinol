#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	if(x==y){
		if(x>z){
			cout<<z<<" "<<x<<" "<<y;
		}else{
			cout<<x<<" "<<y<<" "<<z;
		}
	}else if(y==z){
		if(y>x){
			cout<<x<<" "<<y<<" "<<z;
		}else{
			cout<<y<<" "<<z<<" "<<x;
		}
	}else if(z==x){
		if(z>y){
			cout<<y<<" "<<z<<" "<<x;
		}else{
			cout<<z<<" "<<x<<" "<<y;
		}
	}else if(x<y){
		if(y<z){
			cout<<x<<" "<<y<<" "<<z;
		}else if(x<z&&z<y){
			cout<<x<<" "<<z<<" "<<y;
		}else if(z<x&&z<y){
			cout<<z<<" "<<x<<" "<<y;
		}
	}else if(y<x){
		if(x<z){
			cout<<y<<" "<<x<<" "<<z;
		}else if(y<z&&z<x){
			cout<<y<<" "<<z<<" "<<x;
		}else if(z<y&&z<x){
			cout<<z<<" "<<y<<" "<<x;
		}
	}else if(z<x){
		if(x>y){
			cout<<z<<" "<<x<<" "<<y;
		}else if(z<y&&y<x){
			cout<<z<<" "<<y<<" "<<x;
		}
	}
	cout<<endl;
	return 0;

}