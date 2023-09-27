#include <iostream>
 
using namespace std;


int main()
{
	int x,y,z;

	cin >>x;
	cin >>y;
	cin >>z;

	if(x<y && y<z)
		cout <<"Yes"<<endl;
	else
		cout <<"No"<<endl;

	//while(1);

	return 0;
}