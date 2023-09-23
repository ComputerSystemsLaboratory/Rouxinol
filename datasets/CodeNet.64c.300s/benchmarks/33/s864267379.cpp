#include <stdio.h>
#include <math.h>
int main(){
	int a,b,ans;
	char x;
	for(;;){
	scanf("%d %c %d",&a,&x,&b);
	if(x=='+'){
		ans=a+b;
		printf("%d\n",ans);
	}
	else if(x=='-'){
		ans=a-b;
		printf("%d\n",ans);
	}
	else if(x=='*'){
		ans=a*b;
		printf("%d\n",ans);
	}
	else if(x=='/'){
		ans=a/b;
		printf("%d\n",ans);
	}
	else if(x=='?'){
		break;
	}
}
	return 0 ;
}