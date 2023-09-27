#include<iostream>

using namespace std;

int main(){
	int f=0,s=0,t=0,num,tmp;
	
	for(int i=0;i<10;i++){
		cin>>num;
		if(num>t){
			t=num;
		}
		if(t>s){
			tmp=s;
			s=t;
			t=tmp;
		}
		if(s>f){
			tmp=f;
			f=s;
			s=tmp;
		}
		
	}
	cout << f << endl << s << endl << t << endl;
	
	return 0;
}