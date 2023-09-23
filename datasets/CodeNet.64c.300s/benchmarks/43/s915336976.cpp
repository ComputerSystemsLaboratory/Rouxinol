#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	int s,t;
	
	cin>>a>>b>>c>>d;
	s=a+b+c+d;
	cin>>a>>b>>c>>d;
	t=a+b+c+d;
	
	if(s>=t){
		cout<<s<<endl;
	}else{
		cout<<t<<endl;
	}
	return 0;
}
	