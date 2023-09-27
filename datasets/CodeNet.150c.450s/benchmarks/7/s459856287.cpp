#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a[10];

for (int i = 0; i<10; ++i)
{
 scanf("%d",&a[i]);
}
sort(a,a+10);
printf("%d\n",a[9]);
printf("%d\n",a[8]);
printf("%d\n",a[7]);
	 return 0;
}