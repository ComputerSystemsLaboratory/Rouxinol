#include <iostream>

using namespace std;

int main(){
	int x,y,z;
	int E;
	int min;
	int b=0;
	while(cin>>E&&E>0){
		int b=0;
		for(z=0; z*z*z<=E; z++){
			for(y=0; y*y<=E-z*z*z; y++){
				x=E-z*z*z-y*y;
				if(x<0)break;
				if(!b){
					min=x+y+z;
					b=1;
				}
				else{
					if(min>(x+y+z)){
						min=x+y+z;
					}
				}
			}
		}
		cout<<min<<endl;
	}
}