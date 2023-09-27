#include <iostream>
using namespace std;
int main(void)
{
	int a,b,c=0;
	cin >> a;
	while(a!=0){
	b=1000-a;
	c+=b/500;
	b=b%500;
	c+=b/100;
	b=b%100;
	c+=b/50;
	b=b%50;
	c+=b/10;
	b=b%10;
	c+=b/5;
	c+=b%5;
	cout << c << endl;
	c=0;
	cin >> a;
	}
	
	return 0;
}