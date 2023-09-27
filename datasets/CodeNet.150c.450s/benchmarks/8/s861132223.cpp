#include<cstdio>

int main(void){
	char t[1024], h[1024];
	int n, i, j, tp=0, hp=0;
	scanf("%d", &n);
	for(i=0; i<n; ++i){
		for(j=0; j<1024; ++j){t[j]=h[j]=0;}
		scanf("%s%s", t, h);
		for(j=0; j<1024; ++j){
			if(t[j]>h[j]){ tp+=3; goto out;}
			else if(t[j]<h[j]){ hp+=3; goto out;}
			else if((t[j]==h[j])&&(!t[j])){ ++tp; ++hp; goto out;}
		}
		out:;
	}
	printf("%d %d\n", tp, hp);
	return(0);
}
