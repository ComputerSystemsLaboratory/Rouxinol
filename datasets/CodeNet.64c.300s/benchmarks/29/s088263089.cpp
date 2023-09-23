#include<iostream>
using namespace std;
int main(){
	int x,y, y2, z, z3, e;
	while(cin>>e&&e!=0){
		int min=1e6;
		for(y=0;y<=1e3;y++){
			y2=y*y;
			for(z=0;z<=1e2;z++){
				z3=z*z*z;
				x=e-y2-z3;
				if(min>x+y+z&&x>=0){
					min=x+y+z;
				}
			}
		}
		cout<<min<<endl;
	}
}