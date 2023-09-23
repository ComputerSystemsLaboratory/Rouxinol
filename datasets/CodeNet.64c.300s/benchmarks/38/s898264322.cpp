#include <cstdio>
using namespace std;

int a[12];

bool binary(int left,int right,int i);

int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<10;j++)
		scanf("%d",&a[j]);

		if(binary(0,0,0))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

bool binary(int left,int right,int i)
{
	if(i == 10) return true;
	if(right < a[i]) return binary(left,a[i],i+1);
	if(left < a[i]) return binary(a[i],right,i+1);
	return false;
}