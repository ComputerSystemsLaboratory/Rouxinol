#include <cstdio>
using namespace std;
int main(){
	long a,b,i;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		i=1;a+=b;b=1;
		while(b<=a){i++;b*=10;}
		printf("%ld\n",i-1);
	}
	return 0;
}