#include<iostream>
using namespace std;
int main(){
	int a=1,b,c,count=0;
	cin>>b;
	for(;count<b;count++){
		if(a%3==0||a%10==3){
			cout<<' '<<a;
		}else{
			for(c=a;c!=0;){
				c/=10;
				if(c%10==3){
					cout<<' '<<a;
					break;
				}
			}
		}
		a++;
	}
	cout<<endl;
	return 0;
}