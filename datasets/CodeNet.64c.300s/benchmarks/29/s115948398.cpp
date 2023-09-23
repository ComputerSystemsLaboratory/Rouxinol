#include<iostream>

using namespace std;

int main(){
	int e,sub,data;
	int x,y,z;
	cin >> e;
	while(e!=0){
		for(z=1;;z++){
			if(z*z*z>e){
				z--;
				break;
			}
		}

		data=100000;

		for(;z>=0;z--){
			sub=z*z*z;
			for(y=1;;y++){
				if((sub+y*y)>e){
					y--;
					break;
				}
			}
			sub=sub+y*y;
			for(x=1;;x++){
				if((sub+x)>e){
					x--;
					break;
				}
			}	
			if(data>(x+y+z)){
				data=x+y+z;
			}

		}
		cout << data << '\n';
		cin >> e;
	}
}