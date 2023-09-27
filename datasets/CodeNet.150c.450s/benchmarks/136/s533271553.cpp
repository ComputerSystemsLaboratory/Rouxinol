#include<iostream>
using namespace std;
int main(){
	int a,b,d=0,c,e;
	while(cin>>a>>b){
		c=a;
		e=b;
		if(a<b){
			d++;
		}
		while(a!=0&&b!=0){
			if(d%2==0){
				a%=b;
			}else{
				b%=a;
			}
			d++;
		}
		cout<<a+b<< " " <<c*(e/(a+b))<<endl;
	}
	return 0;
}