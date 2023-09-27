#include <iostream>
using namespace std;

int yvector(int d)
	{
	if(d==1)return -1;
	else if(d==3)return 1;
	else return 0;
	}
	
int xvector(int d)
	{
	if(d==0)return -1;
	else if(d==2)return 1;
	else return 0;
	}

int main()
{
	int N=1;
	while(true)
	{
		cin >> N;
		if(N==0)break;
		int top=0,bottom=0,left=0,right=0;
		int boxx[200],boxy[200];
		boxx[0]=0;boxy[0]=0;
		for(int i=1;i<=N-1;i++)
		{
			int n,d;
			cin >> n; cin >> d;
			boxx[i]=boxx[n]+xvector(d);
			boxy[i]=boxy[n]+yvector(d);
			if(boxx[i]<left)left = boxx[i];
			if(boxx[i]>right)right = boxx[i];
			if(boxy[i]>top)top=boxy[i];
			if(boxy[i]<bottom)bottom=boxy[i];
		}
		cout << right - left +1 << " " << top - bottom +1 << endl;
	
	
	}
	return 0;

}


	