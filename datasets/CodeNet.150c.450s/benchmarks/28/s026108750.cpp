#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <stdexcept>
#include <vector>
using namespace std;


#define abs(N) ((N>0)?N:-1*N)
#define lt(A,B) ((A>B)?B:A)
#define gt(A,B) ((A<B)?B:A)
#define print(S) (cout << S)
#define println(S) (cout << S << endl)
#define ll long long int

bool check(int * w, int n, int k, int P){
	int cur_k=1,cur_sum=0;
	for (int j = 0; j < n; ++j) {
		if(cur_sum + w[j] <= P){
			cur_sum += w[j];
		}else{
			if(cur_k == k) return false;
			cur_k++;
			cur_sum = 0;
			cur_sum += w[j];
		}
	}
	return true;
}

int BinarySearch(int * w, int n, int k, int init_l, int init_r){
//	println("=============================");
	int l=init_l,r=init_r,c;
	bool res_l,res_r,res_c;
	res_l = check(w,n,k,l);
	res_r = check(w,n,k,r);
	if(res_l) return l;
	while(true){
		c = (l+r)/2;
		res_c = check(w,n,k,c);
//		printf("res[%d]=%d,res[%d]=%d,res[%d]=%d\n",l,res_l,c,res_c,r,res_r);
		if(res_c){
			r = c;
		}else{
			l = c;
		}
		if(r-1 == l){return r;}
	}

	return -1;
}


int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	int max_w = -1,sum_w = 0;
	int w[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d",&w[i]);
		max_w = gt(max_w,w[i]);
		sum_w += w[i];
	}
	int ret = BinarySearch(w,n,k,max_w,sum_w);
	println(ret);
//	for (int P = max_w; P <= sum_w; ++P) {
//		if(check(w,n,k,P)){
//			println(P);
//			return 0;
//		}
//	}
	return 0;
}

