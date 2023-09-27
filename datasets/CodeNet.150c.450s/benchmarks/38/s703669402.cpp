#include <stdio.h>

int hantei(int l1,int l2,int l3);
//??´?§?????§???¢??????????????????????????????????????????

int main(void)
{
	int kaisuu, l1, l2, l3;
	int kekka[1000];
	scanf("%d", &kaisuu);
	for(int i = 0; i < kaisuu; i++) {
		scanf("%d %d %d", &l1, &l2, &l3);
		kekka[i] = hantei(l1, l2, l3);
	}
	for(int i = 0; i < kaisuu; i++) {
		if(kekka[i] == 1) {
		 	printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}

int hantei(int l1,int l2,int l3)
{
	int llong, lshort1, lshort2;
	if(l1 <= l2) {
		lshort1 = l1 * l1;
		if(l2 <= l3) {
			lshort2 = l2 * l2;
			llong = l3 * l3;
		}else{
			lshort2 = l3 * l3;
			llong = l2 * l2;
		}
	}else{
		lshort1 = l2 * l2;
		if(l1 <= l3) {
			lshort2 = l1 * l1;
			llong = l3 * l3;
		}else{
			lshort2 = l3 * l3;
			llong = l1 * l1;
		}
	}
	if(lshort1+ lshort2 == llong) {
		return 1;
	}else{
		return 0;
	}
}