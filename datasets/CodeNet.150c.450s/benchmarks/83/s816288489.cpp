#include<iostream>
using namespace std;
const int maxnum = 1000;
int w[maxnum];			//w[i] -- the (i+1)th item's weight
int v[maxnum];			//v[i] -- the (i+1)th item's value
int maxvalue[999999]={0};
void knapsack(int N, int W, int *max, int *w);

int main()
{
	int N; //the total number of items
	int W; //the maximum load capacity
	cin>>N>>W;
	if( N<1 || N>100 || W<1 || W>10000)
	{
		cout<<"error"<<endl;
		return 1;
	}
	for(int i = 1;i <= N;i++)
	{
		cin>>v[i]>>w[i];
		if(v[i]<1 || v[i] > 1000 || w[i] < 1 || w[i] > 1000)
		{
			cout<<"error"<<endl;
			return 1;
		}
	}
	knapsack(N,W,maxvalue,w);
	cout<<maxvalue[W]<<endl;
	return 0;
}

void knapsack(int N, int W, int *maxvalue, int *w)
{
	for(int counter = 1;counter <= N;counter++)
	{
		for(int j=W;j>=0;j--)
		{
			if(j-w[counter] < 0)
			{
				break;
			}
			else
				if(maxvalue[j] <= maxvalue[j-w[counter]]+v[counter])
				{
					maxvalue[j] = maxvalue[j-w[counter]]+v[counter];
				}
				else
					maxvalue[j] = maxvalue[j];
		} 

	}
}