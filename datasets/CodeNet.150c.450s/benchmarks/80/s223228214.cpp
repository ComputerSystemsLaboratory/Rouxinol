#include <iostream>
using namespace std;

int main() {
	int S,P,w,x,y,z,a,b,c,d;
	cin>>w>>x>>y>>z;
	S=w+x+y+z;
	cin>>a>>b>>c>>d;
	P=a+b+c+d;
	if(S==P){
		cout<<S<<endl;
	}
	else
	{int q = max(S,P);
	cout<<q<<endl;
	}
	return 0;
}