#include<iostream>
using namespace std;
int main(void)
{
	int a,b,c,max=0,half=0,min=0;
	cin>>a>>b>>c;
	if(a<=b && a<=c) min=a;
	else if(b<=a && b<=c) min=b;
	else min=c;
	if(b<=a && c<=a) max=a;
	else if(a<=b && c<=b) max=b;
	else max=c;
	if((b<=a && a<=c) || (c<=a && a<=b)) half=a;
	else if((a<=b && b<=c) || (c<=b && b<=a)) half=b;
	else half=c;
	cout<<min<<' '<<half<<' '<<max<<endl;
	return 0;
}
