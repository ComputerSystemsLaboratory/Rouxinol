#include<iostream>
using namespace std;
int main()
{
	int n,h,m,s;
	cin>>n;//second
	s=n%60;
	n=(n-s)/60;//minutes
	m=n%60;
	n=(n-m)/60;//hour
    h=n;
    cout<<h<<":"<<m<<":"<<s<<endl;


	
	return 0;
}
