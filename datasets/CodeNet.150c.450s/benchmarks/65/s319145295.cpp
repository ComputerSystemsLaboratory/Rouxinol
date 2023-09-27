#include<cstdio>

int main(void){
	
	int i,j,n,c=0,x,m;
	char y;
	scanf("%d",&n);
	
	int a[n];
	char b[n];
	
	for(i=0;i<n;i++){
		scanf(" %c%d",&b[i],&a[i]);
		
	}
	char a1[n],a2[n],b1[n],b2[n];
	for(i=0;i<n;i++){
		a1[i]=a[i];
		a2[i]=a[i];
		b1[i]=b[i];
		b2[i]=b[i];
	
	}
	
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(a1[j]<a1[j-1]){
				x=a1[j];
				a1[j]=a1[j-1];
				a1[j-1]=x;
				y=b1[j];
				b1[j]=b1[j-1];
				b1[j-1]=y;
			}
		}
	}
	
	for(i=0;i<n;i++){
		m=i;
		for(j=i;j<n;j++){
			if(a2[j]<a2[m]){
				m=j;
			}
		}
			x=a2[i];
			a2[i]=a2[m];
			a2[m]=x;
			y=b2[i];
			b2[i]=b2[m];
			b2[m]=y;
	}
	//for(i=0;i<n;i++){
	//	printf("%c ",b[i]);
	//}
	//printf("\n");
	
	char d[9][4]={'\0'},e[9][4]={'\0'};
	for(i=1;i<=9;i++){
		int k=0,l=0;
		for(j=0;j<n;j++){
			if(a[j]==i){
				d[i-1][k]=b[j];
				//printf("i=%d,j=%d,k=%d,%c\n",i,j,k,d[i-1][k]);
				k++;
			}
			if(a2[j]==i){
				e[i-1][l]=b2[j];
				//printf("i=%d,j=%d,l=%d,%c\n",i,j,l,e[i-1][l]);
				l++;
			}
			
				
		}
	}
	bool boo=true;
	for(i=0;i<9;i++){
		for(j=0;j<4;j++){
			if(d[i][j]!=e[i][j]){
				boo=false;
			}
		}
	}
	
	
	for(i=0;i<n-1;i++){
		printf("%c%d ",b1[i],a1[i]);
	}
	printf("%c%d\n",b1[n-1],a1[n-1]);
	printf("Stable\n");
		
	for(i=0;i<n-1;i++){
	printf("%c%d ",b2[i],a2[i]);
	}
	printf("%c%d\n",b2[n-1],a2[n-1]);
	if(boo==true){
		printf("Stable\n");
	}else {
		printf("Not stable\n");
	}
	 return 0;
}