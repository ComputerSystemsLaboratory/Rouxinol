#include<numeric>
#include<iostream>

using namespace std;

int main()
{
	int s[4],t[4];
	for(int i=0;i<4;i++)	cin>>s[i];
	for(int i=0;i<4;i++)	cin>>t[i];
	s[0]=accumulate(s,s+4,0);
	t[0]=accumulate(t,t+4,0);
	cout<<(s[0]<t[0]?t[0]:s[0])<<endl;
	return 0;
}