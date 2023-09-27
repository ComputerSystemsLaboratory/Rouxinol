#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	while (cin >> n, n){
		int inA, inB, ansA = 0, ansB = 0;
		for (int i = 0; i < n; i++){
			cin >> inA >> inB;
			if (inA > inB) ansA += inA + inB;
			else if (inB > inA) ansB += inA + inB;
			else{
				ansA += inA;
				ansB += inB;
			}
		}
		printf("%d %d\n", ansA, ansB);
	}
}