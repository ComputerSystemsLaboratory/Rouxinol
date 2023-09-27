#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n,m,i,j;
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		
		vector<char> str,conv[2];
		for(i=0;i<n;i++)
		{
			char a,b;
			cin >> a >> b ;
			conv[0].push_back(a);
			conv[1].push_back(b);
		}
		
		cin >> m ;
		
		for(i=0;i<m;i++)
		{
			char a;
			cin >> a ;
			for(j=0;j<conv[0].size();j++)
			{
				if(a==conv[0][j])
				{
					a=conv[1][j];
					break;
				}
			}
			str.push_back(a);
		}
		for(i=0;i<str.size();i++)
			cout << str[i] ;
		cout << endl;
	}
}