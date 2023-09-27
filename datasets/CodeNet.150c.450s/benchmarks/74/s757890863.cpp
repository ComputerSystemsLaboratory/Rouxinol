#include<cstdio>
#include<algorithm>
int min(int,int);
int main(void){
	int i,j,k,x,y;
	int n, m;
	int c[20];
	int a[50001];
	int b[50001];
	
	scanf("%d%d",&n,&m);
	
	
	for(i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	
	if(m == 1){
		printf("%d\n", n);
		return 0;
	}
	
	std::sort(c,c+m);
	
	
	for(i=0;i<=n;i++){
		a[i]=i/c[1] + i%c[1];
		b[i]=a[i];
	}
	//for(j=0;j<=n;j++){
	//		printf("%d ",a[j]);
	//	}
	//printf("\n");
	bool l = true;
	for(i=2;i<m;i++){
		
		if (l){
	//	printf("ok\n");
			for(j=0;j<=n;j++){
				if(j<c[i]){
					b[j] = a[j];
				} else{
					b[j] = min(b[j-c[i]]+1, a[j]);
				}
			}
			
			l = false;
		} else {
			for(j=0;j<=n;j++){
				if(j<c[i]){
					a[j] = b[j];
				} else{
					a[j] = min(a[j-c[i]]+1, b[j]);
				}
			}
			l = true;
		}
		
	//	for(j=0;j<=n;j++){
	//		printf("%d ",a[j]);
	//	}
	//	for(j=0;j<=n;j++){
	//		printf("%d ",b[j]);
	//	}
	//	printf("\n");
	//	for(j=0;j<=n;j++){
	//		a[j] = b[j];
	//	}
	
	}
	if (m%2 == 0){
		printf("%d\n", a[n]);
	} else {
		printf("%d\n", b[n]);
	}
	return 0;
}

int min(int a,int b){
	if(a<b){
		return a;
	} else {
		return b;
	}
}
	