#include <bits/stdc++.h>

using namespace std;

bool prime(int n)
{
	for (int i=2; i*i <= n; ++i)
	{
		if(n % i == 0) 
		{
			return false;
		}
	}
	return true;
}
  
int main(void)  
{  
    int cnt = 0;
    int n;
    scanf("%d", &n);
    int tmp;
	for(int i = 0; i<n; ++i)
    {
    	scanf("%d", &tmp);
    	if(prime(tmp)) ++cnt;
	}
	printf("%d\n", cnt);
    return 0;  
}