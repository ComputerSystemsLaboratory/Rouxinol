#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

vector<int>PF(int n)
{
	vector<int>v;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
				v.push_back(i);
			}
		}
	}
	if(n!=1)v.push_back(n);
	return v;
}

int main()
{	
	int n;
	cin>>n;
	vector<int>v=PF(n);
	cout<<n<<":";
	for(int i=0;i<v.size();i++)cout<<" "<<v[i];
	cout<<endl;
	return 0;	
}
