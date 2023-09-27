#include<algorithm>
#include<cstdio>

int main(){
	int sen[10000];
	int bit[1024];
	int num[1024],s;
	for(int i=0;i<1024;i++)
		for(num[i]=0,s=i;s>0;s >>= 1)num[i]+=s&1;
	
  int r,c,cc;
  while(true){
		scanf("%d %d",&r,&c);
		if (!r&&!c)break;
		for(int i=0;i<c;i++) sen[i] = 0;
		for(int j=0;j<r;j++){
			for(int i=0;i<c;i++){
				scanf("%d",&cc);
				sen[i] <<= 1;
				sen[i] += cc;
			}
		}
		for(int i=0;i<1024;i++) bit[i] = 0;
		for(int i=0;i<c;i++) bit[sen[i]]++;

		int n,sum = 0,smax = 0,k=1,l;
		k <<= r-1;
		for(int i=0;i<k;i++){
			sum = 0;
			for(int j=0;j<k<<1;j++){
				s = j^i;
				sum += num[s] > (r>>1) ? num[s]*bit[j] : (r-num[s])*bit[j];
			}
			if (sum>smax)smax = sum;
		}
		printf("%d\n",smax);
  }
  return 0;
}