#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int N, s;
int main()
{
	while(cin >> N && N>0)
	{
		s=0;
		for(int i=2; i*(i+1)<=2*N; i++)
		{
			if((i%2==0)&&((2*(N/i)+1)*i==2*N))
			{
				s+=1;
			}
			else if((i%2!=0)&&(i*(N/i)==N))
			{
				s+=1;
			}
		}
		cout << s << endl;
	}
	return 0;
}