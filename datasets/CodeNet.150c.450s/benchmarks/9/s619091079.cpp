#include <iostream>
using namespace std;

int main() {
	int m,h;string s,a;
	while(cin>>s&&s!="-")
	{
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>h;
			a=s.substr(h);
			s.erase(h);
			s=a+s;
		}
		cout<<s<<endl;
	}
	return 0;
}