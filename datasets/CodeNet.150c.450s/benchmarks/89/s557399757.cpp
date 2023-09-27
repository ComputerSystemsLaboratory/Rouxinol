#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int Sosuu_hantei(int N) {
	if (N==1) {return false;}
	int M = sqrt(N) +1;
	for(int i=2; i<M; i ++ ){
		if(( N % i ) == 0 ) {return false;}
	}
	return true;
};

int main() {
	int a=0, d=0, n=0, Num=0;
	while(1){
		scanf("%d%d%d", &a, &d, &n);
		if (a == 0 && d == 0 && n == 0) break;
		Num = a;
		if (Sosuu_hantei(Num)) {n--;}
		while (n!=0) {
			Num +=d;
			if (Sosuu_hantei(Num)) {n--;}
		}
		printf("%d\n", Num);
	}
}