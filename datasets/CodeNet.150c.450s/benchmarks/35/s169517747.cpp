/**
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0022&lang=jp
 */
#include <stdio.h>
#define N 5000

int getsign(int d){
	return d >= 0 ? 1 : -1;
}

int seqsum(int n){
	int a[N];
	int b[N];
	int c = 0;
	int s = 0;

	scanf("%d", a);
	b[0] = a[0];
	s = getsign(a[0]);

	for(int i=1; i<n; ++i){
		scanf("%d", a+i);
		if(s == getsign(a[i])){
			b[c] += a[i];
		}else{
			b[++c] = a[i];
			s = getsign(a[i]);
		}
	}

	int m = b[0];
	int sum = m;
	if(c == 0){
		if(m >= 0){ return m; }
		m = a[0];
		for(int i=1; i<n; ++i){
			if(m < a[i]){
				m = a[i];
			}
		}
		return m;
	}

	a[0] = b[0];
	m = a[0];
	for(int i=1; i<=c; ++i){
		a[i] = a[i-1] < 0 ? b[i] : a[i-1] + b[i];
		if(m < a[i]){
			m = a[i];
		}
	}

	//for(int i=1; i<=c; ++i){
	//	if(m < sum + b[i]){
	//		sum += b[i];
	//		m = sum;
	//	}else if(m < b[i]){
	//		sum = m = b[i];
	//	}else{
	//		sum += b[i];
	//	}
	//}

	return m;
}

int main(void){
	int n = 0;
	while(true){
		scanf("%d", &n);
		if(n == 0){ break;}
		printf("%d\n", seqsum(n));
	}
	return 0;
}