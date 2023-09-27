#include <iostream>
#include <cstdlib>
#include <cstring>

void trace(char *v, char *s, int N){
	int i;
	for(i=0; i<N-1; i++){
		std::cout << s[i] << v[i] << " ";
	}
	std::cout << s[N-1] << v[N-1] << std::endl;
}


void bubbleSort(char *v, char *s, int N){
	int i,j,flag;
	char xv,xs;
	flag = 1;
	while (flag){
		flag = 0;
		for (j=N-1; j>0; j--){
			if (v[j] < v[j-1]){
				xv = v[j]; v[j] = v[j-1]; v[j-1] = xv;
				xs = s[j]; s[j] = s[j-1]; s[j-1] = xs;
				flag = 1;
			}
		}
	}
}

void selectionSort(char *v, char *s, int N){
	int i,j,minj;
	char xv, xs;
	for (i=0;i<N; i++){
		minj = i;
		for (j=i; j<N; j++){
			if (v[minj] > v[j]){
				minj = j;
			}
		}
		if (i!=minj){
			xv = v[i]; v[i] = v[minj]; v[minj] = xv;
			xs = s[i]; s[i] = s[minj]; s[minj] = xs;
		}
	}
}

int main(){
	int N,i;
	char *bv, *sv, *bs, *ss;
	char suit, value;
	std::cin >> N;
	bv = new char[N];
	sv = new char[N];
	bs = new char[N];
	ss = new char[N];
	for (i=0; i<N; i++){
		std::cin >> suit >> value;
		bs[i] = suit; ss[i] = suit;
		bv[i] = value; sv[i] = value;
	}
	bubbleSort(bv, bs, N);
	trace(bv, bs, N);
	std::cout << "Stable" << std::endl;
	
	selectionSort(sv, ss, N);
	trace(sv, ss, N);
	if (std::strcmp(bs,ss)==0){
		std::cout << "Stable" << std::endl;
	}
	else{
		std::cout << "Not stable" << std::endl;
	}
	return 0;
}