#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

int h[10];

for(int i=0;i<10;i++)
	scanf("%d",&h[i]);

sort(h,h+10);

printf("%d\n%d\n%d\n",h[9],h[8],h[7]);

return 0;		
}