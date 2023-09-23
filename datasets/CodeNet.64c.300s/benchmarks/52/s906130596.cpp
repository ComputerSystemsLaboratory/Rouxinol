#include <iostream>
using namespace std;

int calc(int n,int s,int min)
{
    int r=0;
    if (s<min)
	return 0;
    if (n==1)
    {
	if (s<10)
	    return 1;
	else
	    return 0;
    }
    for (int i=min; i<10; i++)
    {
	r+=calc(n-1,s-i,i+1);
    }
    return r;
}

int main()
{
    int n,s;
    while (1)
    {
	cin >> n >> s;
	if (n==0)break;
	cout << calc(n,s,0) << endl;
    }
    return 0;
}