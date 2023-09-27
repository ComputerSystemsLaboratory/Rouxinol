




#include<iostream>
using namespace std;
int s[7];
void solve(int n,int m)
{
	if(n==s[5]&&m==s[4]||n==s[3]&&m==s[5]||n==s[2]&&m==s[3]||n==s[4]&&m==s[2])
		cout<<s[1]<<endl;
	if(n==s[3]&&m==s[2]||n==s[5]&&m==s[3]||n==s[4]&&m==s[5]||n==s[2]&&m==s[4])
		cout<<s[6]<<endl;
	if(n==s[1]&&m==s[4]||n==s[3]&&m==s[1]||n==s[6]&&m==s[3]||n==s[4]&&m==s[6])
		cout<<s[2]<<endl;
	if(n==s[4]&&m==s[1]||n==s[1]&&m==s[3]||n==s[3]&&m==s[6]||n==s[6]&&m==s[4])
		cout<<s[5]<<endl;
	if(n==s[1]&&m==s[2]||n==s[5]&&m==s[1]||n==s[6]&&m==s[5]||n==s[2]&&m==s[6])
		cout<<s[3]<<endl;
	if(n==s[2]&&m==s[1]||n==s[1]&&m==s[5]||n==s[5]&&m==s[6]||n==s[6]&&m==s[2])
		cout<<s[4]<<endl;


}
int main()
{
	int n,m,q;
for(int i=1;i<=6;i++)
		cin>>s[i];
cin>>q;
for(int i=0;i<q;i++)
	{	cin>>n>>m;
		solve(n,m);

}
return 0;

	

}