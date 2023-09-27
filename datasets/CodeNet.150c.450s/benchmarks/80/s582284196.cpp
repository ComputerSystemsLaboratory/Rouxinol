#include<iostream>
using namespace std;

int score[2][4];
int T[2];
int main()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin >>score[i][j];
			T[i]+=score[i][j];
		}
	}
	if(T[0]>=T[1])
	{
		cout<<T[0]<<endl;
	}
	else
	{
		cout<<T[1]<<endl;
	}
	return 0;
}