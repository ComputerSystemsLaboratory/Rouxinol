#include<stdio.h>
#include<stdlib.h>

int cmp1(const void *a, const void *b){
	return *((char *)a) - *((char *)b);
}
int cmp2(const void *a, const void *b){
	return *((char *)b) - *((char *)a);
}

int ff(int a,int b){
	int m,mm;
	int i;
	char s[13]={0};
	/*
	for(i = 5;i >= 0;i--){
		s[i] = a%10 + '0';
		a /= 10;
		if(a==0)break;
	}
	for(;i >= 0;i--)s[i] = '0';
	*/
	sprintf(s,"%d000000",a);
	s[b] = '\0';

	qsort(s,b,sizeof(char),cmp1);
	m = atoi(s);
	qsort(s,b,sizeof(char),cmp2);
	mm = atoi(s);

	return mm-m;
}

int main(){
	int i,j,a[100],l,ii,jj;
	int q,w,e,r,t,y;

	while(scanf("%d%d",&a[0],&l),l){
		for(i = 1;1;i++){
			a[i] = ff(a[i-1],l);
			q = 0;
			for(j = 0;j < i;j++){
				if(a[i] == a[j]){
					ii = i;
					jj = j;
					q = 1;
					break;
				}
			}
			if(q)break;
		}
		printf("%d %d %d\n",jj,a[jj],ii-jj);
	}
	return 0;
}

/*
959000 6
95900 6
9590 6
959 6
950900 6
920097 6
920079 6
919600 6
91960 6
9196 6
919060 6
862632 6
750843 6
55555 5
2 1
782464 6
782457 6
782446 6
779944 6
23 2
23 3
23 4
23 5
23 6
631764 6
6174 4
549945 6
495 3
105 3
104642 6
707813 6
191985 6
27605 5
171941 6
859443 6
188265 6
682092 6
94354 6
9983 6
90499 6
904909 6
904099 6
903980 6
90398 6
903908 6
903890 6
90389 6
903809 6
903098 6
903089 6
831701 6
831699 6
831600 6
83160 6
8316 6
831592 6
831570 6
99989 5
99964 5
999794 6
383342 6
383336 6
887 3
960 3
96 3
96 2
50005 6
500005 6
500 3
50 3
5 3
5 1
499994 6
0 0
*/





			