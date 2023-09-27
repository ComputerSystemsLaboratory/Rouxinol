#include <iostream>
using namespace std;

int main() {
	string s,a;int n,b,c;cin>>s>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a=="print")
		{
			cin>>b>>c;
			for(int j=b;j<=c;j++)cout<<s[j];
			cout<<endl;
		}
		else if(a=="reverse")
		{
			cin>>b>>c;
			a=s;
			for(int j=b;j<=c;j++)s[j]=a[c-j+b];
		}
		else if(a=="replace")
		{
			cin>>b>>c>>a;
			s.erase(b,c-b+1);
			s.insert(b,a);
		}
	}
	return 0;
}