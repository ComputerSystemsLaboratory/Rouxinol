#include<stdio.h>

int main()
{
	char a[201]={'x'},b[201]={'x'};
	int i,t,p,n,m;
	
	for(;a[0]!='-';){
		
		scanf("%s",a);
		
		if(a[0]!='-'){
			
			scanf("%d",&n);//n?????\??????????????°
			
			for(i=0;a[i]!='\0';i++){//i???????????°
				b[i]='0';
			}
			for(t=0;t<n;t++){
				
				scanf("%d",&m);//m?????\??????????????°
				
				for(p=0;p<m;p++){
					
					b[i-m+p]=a[p];
				}
				//printf("%s %s\n",a,b);
				for(p=0;p<i-m;p++){
					
					b[p]=a[m+p];
				}
				//printf("%s %s\n",a,b);
				for(p=0;p<i;p++){
					
					a[p]=b[p];
				}
				//printf("%s %s\n",a,b);
			}
			for(p=0;p<i;p++){
				
				printf("%c",a[p]);
			}
			printf("\n");
		}
	}
	return 0;
}