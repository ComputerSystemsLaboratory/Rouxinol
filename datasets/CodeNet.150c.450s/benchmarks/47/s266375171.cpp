#include <iostream>
 
using namespace std;


int main()
{
	int W,H,x,y,r;
	
	cin >>W;
	cin >>H;
	cin >>x;
	cin >>y;
	cin >>r;

	if(H>=y+r && y-r>=0 && W>=x+r && x-r>=0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}