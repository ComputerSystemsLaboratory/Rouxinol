#include <iostream>
using namespace std;



int main()
{
	int N,P;
	while(cin >> N >> P, (N||P))
	{
		int n[100]={0}, p=0,cnt=0,np=P;

		while(1)
		{
			if(P==0)
			{
				P=n[p];
				n[p]=0;
			}
			else
			{
				P--;
				n[p]++;
			}

			cnt++;
			
			if(n[p]==np) break;
			p=(cnt%N);

		}

		cout << p << endl;
	}
}