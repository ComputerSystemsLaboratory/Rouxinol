#include <iostream>

using namespace std;

int main(){
	int a,b,c,d,s,t;
	cin>>a>>b>>c>>d;
	s=a+b+c+d;
	cin>>a>>b>>c>>d;
	t=a+b+c+d;
	cout<<max(s,t)<<endl;
}