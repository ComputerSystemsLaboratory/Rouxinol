#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
int sen[10000];

int main(){
  int r,c,cc;
  while(true){
		scanf("%d %d",&r,&c);
		if (!r&&!c)break;
		for(int i=0;i<c;i++)
			sen[i] = 0;
		
		for(int j=0;j<r;j++){
			for(int i=0;i<c;i++){
				scanf("%d",&cc);
				sen[i] <<= 1;
				sen[i] += cc;
			}
		}
		
		int s,n,sum = 0,smax = 0,k=1;
		k <<= r;
		for(int i=0;i<k;i++){
			sum = 0;
			for(int j=0;j<c;j++){
				s = sen[j]^i;
				for(n=0;s>0;s >>= 1)n+=s&1;
				sum += max(n,r-n);
			}
			if (sum>smax)smax = sum;
		}
		printf("%d\n",smax);
  }
  return 0;
}