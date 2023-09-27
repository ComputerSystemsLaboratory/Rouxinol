#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int A, L;

	while(true){
		scanf("%d %d\n",&A, &L);
		if(A==0 && L==0){return 0;}

		int* a = new int[22];
		int* num = new int[L];
		int big=0, small=0, cal=0;
		bool flag = true;

		a[0] = A;
		for(int i=1; i<22; i++){
			a[i] = -1;
		}
		for(int i=0; i<21; i++){
			cal = a[i];
			/* 各桁ごとに数字を記憶 */
			for(int j=0; j<L; j++){
				num[j] = cal%10;
				cal = cal/10;
			}
			sort(num, num+L); /* 各桁の数字をソート */
			/* 最大数と最小数を求める */
			for(int j=0; j<L; j++){
				big += num[j] * pow(10,j);
				small += num[j] * pow(10,L-1-j);
			}
			/* 最大数と最小数の差分から数列の次項を求めて記憶 */
			cal = big - small;
			a[i+1]=cal;
			big=0; small=0;
			/* これまで求めた項に一致する数字があるかを調べる */
			for(int j=0; j<i+1; j++){
				if(cal == a[j]){
					printf("%d %d %d\n", j, cal, (i+1)-j);
					flag = false;
					break;
				}
			}
			if(!flag){break;}
		}
		delete[] a;
		delete[] num;
	}

	return 0;
}