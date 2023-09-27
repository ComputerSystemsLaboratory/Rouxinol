#include <cstdio>
#define LOOP(index,times) for(int index=0;index<times;index++)
using namespace std;

int main(){
long a,b,r;
while(scanf("%ld %ld",&a,&b) != EOF){
	
	long c=a*b;
			
	if(b>a){r=a; a=b; b=r;}

	while(1){
	r=a%b;
	if(r==0) break;
	a=b; b=r;		
	}
	printf("%ld %ld\n",b,c/b);
}
return 0;		
}