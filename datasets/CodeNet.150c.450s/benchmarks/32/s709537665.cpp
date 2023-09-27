#include <iostream>

using namespace std;

int main()
{
	int n,k,l,m,q,p,a[205],b[205],i,j;
	m=0;
	do{
		cin >> n >> k >> l;
		for(i=0; i<n; i++)
			cin >> a[i];
		p=200000;
		for(j=k; j<=l; j++)
		{
			if(a[j]-a[j-1]<=p)
			{
				p=a[j]-a[j-1];
				q=j;
			}
		}
		b[m]=q;
		m++;
	}while(n!=0||k!=0||l!=0);
	for(i=0; i<m-1; i++)
		cout << b[i] << "\n";
}

