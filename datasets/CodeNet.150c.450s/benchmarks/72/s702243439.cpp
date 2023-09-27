#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string a;
	getline(cin,a);
    for(int i=0;i<1200;i++)
     {
	  if(a[i]<91&&a[i]>64)
	  a[i]=a[i]+32;
	  else if(a[i]>96&&a[i]<123)
	  a[i]=a[i]-32;
	 }
     cout<<a<<endl;
	return 0;
}

