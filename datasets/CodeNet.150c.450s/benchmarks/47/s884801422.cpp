#include<iostream>
using namespace std;
int main(){
	int X,Y,x,y,r;
	int check=0;
	cin>>X>>Y>>x>>y>>r;
	if(y>Y){
		check=1;
	}
	else if(x>X){
		check=1;
	}
	else if(0>x){
		check=1;
	}
	else if(0>y){
		check=1;
	}
	else if(x-r<0){
		check=1;
	}
	else if(y-r<0){
		check=1;
	}
	else if(x+r>X){
		check=1;
	}
	else if(y+r>Y){
		check=1;
	}
	if(check==1){
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}
	return 0;
}