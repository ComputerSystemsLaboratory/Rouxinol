#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b;
	while(getline(cin,a))
	{
		getline(cin,b);
		int hit=0,blow=0;

		for (int i = 0; i < 7; ++i)
		{
			for (int j = 0; j < 7; ++j)
			{
				if(b[i]!=' '&&b[i]==a[j])
				{
					if(i==j) hit++;
					else blow++;
				}
			}
		}
		cout<<hit<<" "<<blow<<endl;
	}
	return 0;
}