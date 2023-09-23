#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int n,x,ans[100] = { 0 },i=0;
	while (1)
	{
		cin >> n >> x;
		if (n == 0 && x == 0) break;
		for (int j = 1; j <= n; j++){
			for (int k = j+1; k <= n; k++){
				for (int l = k+1; l <= n; l++){
					if (j+k+l==x){
						ans[i]++;
					}
				}
			}
		}
		i++;
	}
	for (int j = 0; j < i; j++) printf("%d\n",ans[j]);
}