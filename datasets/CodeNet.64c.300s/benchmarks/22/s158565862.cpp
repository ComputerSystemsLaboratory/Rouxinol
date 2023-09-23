#include <cstdio>

int main(){
	int n,s[5],tmp;
	int a[1010];int b[1010];int c[1010];

	scanf("%d",&n);

	for(int i =1;i<=n;i++){
		scanf("%d %d %d",&s[1],&s[2],&s[3]);
		int x = 1;
		while(x > 0){
			x=0;
			for(int k = 1;k<3;k++){
				if(s[k] > s[k+1]){
					tmp=s[k];s[k]=s[k+1];s[k+1]=tmp;x++;
				}
			}
		}
		c[i] = s[3];b[i]=s[2];a[i]=s[1];
	}

	for(int j =1;j<=n;j++){
		if((c[j]*c[j]) == ((a[j]*a[j])+(b[j]*b[j]))){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
