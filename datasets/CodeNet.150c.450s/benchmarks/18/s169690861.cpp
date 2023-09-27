#include <cstdio>
#include <cmath>
using namespace std;

int main(){

int n;
scanf("%d",&n);

long debt=100000;

for(int i=0;i<n;i++)
	debt=(long)(ceil(debt*1.05/1000.0))*1000;

printf("%ld\n",debt);

return 0;		
}