#include<iostream>
 
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int dem = 0;
	int x = a;
	while (x <= b)
	{
		if (c % x == 0)
			dem++;
		x++;
	}
	cout<<dem<<endl;
	return 0;
}