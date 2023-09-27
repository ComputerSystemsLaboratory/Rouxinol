#include<iostream>
using namespace std;

int main()
{
	float ax,ay,bx,by,cx,cy,dx,dy;
	double katamuki[2];
	short n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
		katamuki[0]=(by-ay)/(bx-ax);
		katamuki[1]=(dy-cy)/(dx-cx);
		cout<<((katamuki[0]==katamuki[1])?"YES":"NO")<<endl;
	}
	
	return 0;
}