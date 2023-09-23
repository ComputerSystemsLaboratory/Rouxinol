#include<stdio.h>
int main(void)
{
	int n,i,w,a,s,d,x,j,z;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d %d",&a,&s,&d);
			if(a>s&&d<a){
					if(a*a==d*d+s*s){
						printf("YES\n");
					}
					else{
						printf("NO\n");
					}	
			}	
			else if(a<d&&d>s){
					if(d*d==a*a+s*s){
						printf("YES\n");
					}
					else{
						printf("NO\n");
					}				
			}
			else if(a<s&&s>d){
					if(s*s==a*a+d*d){
						printf("YES\n");
					}
					else{
						printf("NO\n");
					}				
			}
			else if(a==s&&s==d&&d==a||a==s||s==d||d==a){
				printf("NO\n");
		}	
		
		}
	return 0;
}