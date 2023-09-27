#include <iostream>

using namespace std;

int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	cin>>a>>b>>c>>d;
	cin>>e>>f>>g>>h;
	if(a+b+c+d>e+f+g+h)
	{
	    cout<<a+b+c+d<<endl;
	}
	if(e+f+g+h>a+b+c+d)
	{
        cout<<e+f+g+h<<endl;	
	}
	if(e+f+g+h==a+b+c+d)
	{
	    cout<<a+b+c+d<<endl;
	}

	return 0;
}