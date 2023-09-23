#include <cstdio>

using namespace std;

int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){break;}
		int a,b;
		a = b = 0;
		int ac,bc;
		for(int i=0;i<n;i++){
			scanf("%d %d",&ac,&bc);
			if(ac == bc){
				a += ac;
				b += bc;
			}else{
				(ac > bc ? a : b) += ac + bc;
			}
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}