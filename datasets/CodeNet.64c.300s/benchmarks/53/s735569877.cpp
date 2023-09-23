#include<iostream>

using namespace std;

int main(){
	int a,b,c,d;
	d=0;
	cin>>a>>b>>c;
	for(int x=a;x<=b;x++){
		if(c==c/x*x){
			d=++d;
		}
	}
	cout<<d<<endl;
	return 0;
}