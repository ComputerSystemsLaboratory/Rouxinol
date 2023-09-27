
#include <iostream>
//#include <fstream>
using namespace std;

int main(void)
{
	int A[4], B[4];
	int res[4], hit, blow;

	//ifstream fin("in.txt");
	istream& in=cin;

	while(1)
	{
		for(int i=0; i<4; i++)
			{ if( !(in >> A[i]) )return 0; }
		for(int i=0; i<4; i++)
			{ if( !(in >> B[i]) )return 0; }


		for(int i=0; i<4; i++)
			res[i] = 0;
		for(int i=0; i<4; i++)
		{
			if(A[i] == B[i])
			{
				res[i] = 1;
			}
			else
			{
				for(int j=0; j<4; j++)
					if(A[j] == B[i])res[i] = 2;
			}
		}

		hit=0; blow=0;
		for(int i=0; i<4; i++)
		{
				 if(res[i] == 1)hit++;
			else if(res[i] == 2)blow++;
		}
		cout << hit << ' ' << blow << endl;
	}
	return 0;
}