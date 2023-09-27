#include<iostream>
#include<string>
using namespace std;

int main(){
	string S;
	int c;
	bool left,right;
	left=false;
	right=false;
	int a=0;
	int sum=0;
	while(true){
		a=0;
		sum=0;
		left=false;
		right=false;
		cin>>c;
		if(c==0){
			break;
		}
		for(int i=0;i<c;i++){
			cin>>S;
			if(S=="lu"){
				left=true;
			}
			if(S=="ru"){
				right=true;
			}
			if(S=="ld"){
				left=false;
			}
			if(S=="rd"){
				right=false;
			}
			if(a==0 && (left==true && right==true)){
				sum++;
				a=1;
			}
			if(a==1 && (left==false && right==false)){
				sum++;
				a=0;
			}
		}
		cout<<sum<<endl;

	}
	return 0;
}