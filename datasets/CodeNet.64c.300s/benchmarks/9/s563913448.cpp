#include<iostream>
using namespace std;
int main(){
	int moto=100,syuu;
	cin>>syuu;
	for(int abc=0;abc<syuu;abc++){
		if(moto%20!=0){
			moto=moto*1.05+1;
		}else{
			moto*=1.05;
		}
	}
	cout<<moto*1000<<endl;
	return 0;
}