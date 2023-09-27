#include<iostream>
using namespace std;
int main(){
	double a,b,c,d,e,f,g,h;
	int n;
	int x,y;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c>>d>>e>>f>>g>>h;
		x=(d-b)/(c-a);
		y=(h-f)/(g-e);
		if((d-b)/(c-a)==(h-f)/(g-e)){cout<<"YES"<<endl;}
		else {cout<<"NO"<<endl;}
	}
}