#include <cstdio>
#include <algorithm>
#include <set>
#define MAX(a,b) ((a)>(b))?(a):(b)
using namespace std;


int main() {
	int n,p,q,r,max=-1,w;
	int i,j;
	int c;
	int *sum;
	set<int> under;
	set<int> over;
	bool flag=false;
	scanf("%d%d",&n,&q);
	sum=(int *)malloc(sizeof(int)*n);
	scanf("%d",&w);
	max=sum[0]=w;
	for(i=1; i<n; ++i) {
		scanf("%d",&w);
		max=MAX(w,max);
		sum[i]=sum[i-1]+w;
	}
	// ?????????w????????§???max????????§?????????p??¨????????????????????§?????????????????????????§??????????
	// ???????????????q??°???q=1?????¨??????????¨????????§£???
	// ?????????????????°??°???c+1??°??¨?????????c=0????????????????????????c=q-2????????£???????????§??????????????£???????????????r??¨?????????
	// ??\???????????????????????¨?????????c=q-2????????£???????????§??????????????£???????????????r??¨??????
	// 1.c<q-2??§?????????????????????????????????????????????????°?????°???????p??§????????? p=(p+max)/2 -> p==(p+max)/2????????????
	// 2.r<=p?????????????????????????????? ???????°?????°???????k??§?????????p=(p+r)/2 -> p==(p+r)/2???????????????
	// 3.r>p????????±????????????????????? ???????°??????§??????k??§?????????p=(p+r)/2
	// 3?????¶???????????£?????????p-(p+r)/2=(p-r)/2??????????????????10??\???????????????????????????????????§??????????????¨???????????§??¢???
	if(q==1) {
		printf("%d\n",sum[n-1]);
		return 0;
	}
	p=max;
	while(1) {
		i=0;
		for(c=0; c<q-1; ++c) {
			for(j=0; i+j<n; ++j) { // j : ?????????????????????
				if(i==0) { // ??????????????????????±??????????????????????????????????
					if(sum[j]>p) { // ?????§?????????????¶???????
//						printf("load over : c=%d, i=%d, j=%d\n",c,i,j); // debug
						i=j;
						j=0;
						break;
					}
				} else { // ?????????????????\??????????????????
					if(sum[i+j]-sum[i-1]>p) { //?????§?????????????¶???????
//						printf("load over : c=%d, i=%d, j=%d\n",c,i,j);  // debug
						i+=j;
						j=0;
						break;
					}
				}
			}
			if(i+j==n-1 && c<q-2) {
				if(p==max || flag) {
//					printf("i=%d, j=%d. finished by less truck\n",i,j);  // debug
					printf("%d\n",p);
					return 0;
				}
				over.insert(p);
				if(flag) {
					++p;
				} else if(!under.empty()) {
					p=((*over.begin())+(*(--under.end())))/2;
				} else {
					p=(max+p)/2;
				}
			}
		}
		r=sum[n-1]-sum[i-1];
		if(r==p) {
//			printf("last truck is full filled.\n");  // debug
			printf("%d\n",p);
			return 0;
		} else if (!flag) {
			if(r<p) {
				over.insert(p);
				if(!under.empty()) {
//					printf("overwrite value p %d to %d ( under not empty )\n",p,((*(over.begin()))+(*(--under.end())))/2);  // debug
					p=((*(over.begin()))+(*(--under.end())))/2;
				} else {
//					printf("overwrite value p %d to %d ( under empty )\n",p,r+(p-r)/2);  // debug
					p=r+(p-r)/2;
				}
			} else if(r>p) {
				if((!over.empty() && !under.empty() && (*(over.begin()))-(*(--under.end()))<=10) || r-p<=10 ) {
					flag=true;
					under.insert(p);
//					printf("overwrite value p %d to %d ( inclemental overwrite )\n",p,p+1);  // debug
					++p;
				} else {
					under.insert(p);
					if(!over.empty()) {
//						printf("overwrite value p %d to %d ( over not empty )\n",p,((*(over.begin()))+(*(--under.end())))/2);  // debug
						p=((*(over.begin()))+(*(--under.end())))/2;
					} else {
//						printf("overwrite value p %d to %d ( over empty )\n",p,p+(r-p)/2);  // debug
						p=p+(r-p)/2;
					}
				}
			}
		} else {
			if(r>p) {
//				printf("overwrite value p %d to %d ( inclement overwrite second onward turn )\n",p,p+1);  // debug
				++p;
			} else {
//				printf("inclement search finished.\n");  // debug
				printf("%d\n",p);
				return 0;
			}
		}
	}
	return 0;
}