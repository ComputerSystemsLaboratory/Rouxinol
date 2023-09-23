#include <iostream>
#include <cstdio>
int main(){
int n,x,a,b,c,i,wa,ans[256]={0},count=0;
	while(1){
		std::cin>>n>>x;
		if(n==0&&x==0)break;
		for(a=1;a<=n-2;a++){
			for(b=2;b<=n-1;b++){
				if(b<=a)b=a+1;
				if(b>=n)break;
				for(c=3;c<=n;c++){
					if(a>=c)c=a+2;
					if(b>=c)c=b+1;
					if(c>=n+1)break;
					wa=a+b+c;
					if(a<b&&b<c&&wa==x) ans[count]+=1;
				}
			}
		}
	count++;
	}
	for(i=0;i<count;i++){
		std::cout<<ans[i]<<std::endl;
	}
	return 0;
}