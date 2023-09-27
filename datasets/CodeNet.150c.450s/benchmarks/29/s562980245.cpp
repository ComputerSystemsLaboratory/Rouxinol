#include <stdio.h>
#include <string.h>
/*??????????????????????????¨?????????????????¨?????????*/
typedef struct{
	long long int prev;
	long long int next;
	long long int data;
} list;
list L[2000000];
long long int ff = -1,bb = -1;//ff ?????? bb ??????
long long int num = 0,usecnt = -1;//????????????????????¨???????????????


int main(){
	int i,j,k;
	long long int n;
	scanf("%lld",&n);
	for(i=0; i<n; i++){
		char op[20];
		scanf("%s",op);
		if(strcmp(op,"insert")==0){
			long long int p;
			scanf("%lld",&p);
			if(num==0){
				L[usecnt+1].data = p;
				ff = usecnt+1;
				bb = usecnt+1;
				usecnt++;
				num++;
			}else{
				L[usecnt+1].data = p;
				L[usecnt+1].next = ff;
				L[ff].prev = usecnt+1;
				ff = usecnt+1;
				usecnt++;
				num++;
			}
		}else if(strcmp(op,"delete")==0){
			long long int p;
			scanf("%lld",&p);
			long long int nowcnt = 0;
			long long int nowpos = ff;
			long long int tg = L[nowpos].data; // target
			while(nowcnt<num){
				if(tg==p){
					if(nowcnt==0){
						ff = L[ff].next;
						num--;
					}else if(nowcnt==num-1){
						bb = L[bb].prev;
						num--;
					}else{
						L[L[nowpos].prev].next = L[nowpos].next;
						L[L[nowpos].next].prev = L[nowpos].prev;
						num--;
					}
					break;
				}
				tg = L[L[nowpos].next].data;
				nowcnt++;
				nowpos = L[nowpos].next;
			}
		}else if(strcmp(op,"deleteFirst")==0){
			ff = L[ff].next;
			num--;
		}else if(strcmp(op,"deleteLast")==0){
			bb = L[bb].prev;
			num--;
		}
		/*long long  int pos = ff;
		while(pos!=bb){
			printf("%lld ",L[pos].data);
			pos = L[pos].next;
		}
		printf("%lld\n",L[pos].data);
		printf("\n");*/
	}
	long long  int pos = ff;
	while(pos!=bb){
		printf("%lld ",L[pos].data);
		pos = L[pos].next;
	}
	printf("%lld\n",L[pos].data);
	return 0;
}