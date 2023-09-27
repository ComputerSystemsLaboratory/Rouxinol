#include<cstdio>
#include<algorithm>

int main(void){
	int i,j;
	bool z[1024]; //???????????????????????????????????????????????¨false)
	int x[1024],y[1024],k=0; //k=???????????????????????°
	for(i=0;i<1024;i++){
		x[i]=-1;
		y[i]=-1;
		z[i]=true;
	}
	while(true) {
	
		int n,m,Sa=0,Sb=0;
		int a[100],b[100];
	
		scanf("%d%d",&n,&m);
		
		if((n==0)&&(m==0)) break;
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<m;i++){
			scanf("%d",&b[i]);
		}
	
		std::sort(a,a+n);
		std::sort(b,b+m);
	
	//for(i=0;i<n;i++){
	//	printf("a[%d]=%d\n",i,a[i]);
	//}
		for(i=0;i<n;i++){
			Sa+=a[i];
		}
		for(i=0;i<m;i++){
			Sb+=b[i];
		}
	
		int d=Sa-Sb;
		
		if(d%2==0){
			d=d/2;
			
			//printf("d=%d\n",d);
			
			for(i=0;i<n;i++){
				if(z[k]==false) break;
				for(j=0;j<m;j++){
					if(a[i]-d==b[j]){
						x[k]=a[i];
						y[k]=b[j];
						z[k]=false;
					//	printf("x=%d,y=%d,k=%d\n",x[k],y[k],k);
					}
					if(z[k]==false) break;
				}
			}
		}
		k++;
		//printf("k=%d\n",k);
	}	
		
	for(i=0;i<k;i++){	
		if(z[i]){
			printf("-1\n");
		} else {
			printf("%d %d\n",x[i],y[i]);
		}
	}
	return 0;
}