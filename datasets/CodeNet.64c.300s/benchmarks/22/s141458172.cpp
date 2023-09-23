#include <iostream>
using namespace std;
struct length
{
	int a;
	int b;
	int c;
};
int main()
{
	int n,i;
	cin>>n;
	length *p=new length [n];
	for(i=0;i<n;i++)
		cin>>p[i].a>>p[i].b>>p[i].c;
	for(i=0;i<n;i++)
		if((p[i].a * p[i].a == p[i].b * p[i].b + p[i].c * p[i].c)||(p[i].a * p[i].a == p[i].b * p[i].b - p[i].c * p[i].c)||(p[i].a * p[i].a + p[i].b * p[i].b == p[i].c * p[i].c))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	return 0;
}