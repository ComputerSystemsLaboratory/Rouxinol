#include<iostream>
using namespace std;
int main()
{
	int S,T;
	int a,b,c,d,e,f,g,h;
	cin>>a>>b>>c>>d;
	cin>>e>>f>>g>>h;
	S=a+b+c+d;
	T=e+f+g+h;
	if(S<T){
	cout<<T<<endl;
	}
	else{
	cout<<S<<endl;
	}
	return 0;
}