#include<iostream>
using namespace std;
int main(){
	int a;
	int i;
	int s=0;
	
	while(cin>>a){
		if(a==0)break;
		s=0;
		a=1000-a;
		if(a>499){
			a=a-500;
			s=s+1;
		}
		for(i=0;i<4;i++){
			if(a>99){
				a=a-100;
				s=s+1;
			}
		}
		if(a>49){
			a=a-50;
			s=s+1;
		}
		for(i=0;i<4;i++){
			if(a>9){
				a=a-10;
				s=s+1;
			}
		}
		if(a>4){
			a=a-5;
			s++;
		}
		s=s+a;
		cout<<s<<endl;
	}
	return 0;
}