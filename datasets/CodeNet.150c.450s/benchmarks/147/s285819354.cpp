#include <iostream>
#include <fstream>
using namespace std;


#define fun(a,b,c) a*a + b*b + c*c + a*b + b*c + c*a

int main()
{
	//freopen("in.txt","r",stdin);

	int n;
	cin>>n;
	


	for(int m=1;m<=n;m++)
	{
        int i=1,j=1,k=1;

        bool chk=false;
        int cnt=0;

		for( i=1;i<=m;i++)
		{
			if(fun(i,j,k)>m) break;
			if(chk==true) break;

			for( j=1;j<=m;j++)
			{
				if(fun(i,j,k)>m) break; 
				if(chk==true) break;

				for( k=1;k<=m;k++)
				{
					if(fun(i,j,k)>m)
						break;
					 else if(fun(i,j,k)==m)
					 {
						cnt++;
					 }
					 
				}
				k=1;

			}
			j=1;
		}
		cout<<cnt<<endl;

	}



	//cout<<cnt<<endl;
	return 0;
}