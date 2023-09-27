#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int A[1010][12][22];
int main(){
	int a=1, b=1, c=0, t=0;
	while(a<1000){
		++c;
		if (a%3!=0){
			if (b%2==1){
				if(c>20) c=1, ++b;
			}
			else
				if(c>19) c=1, ++b;
		}			
		else
			if (c>20) 	 c=1, ++b;
		
		if (b==11) ++a, b=1;
		++t;
		A[a][b][c] = t;
	}
	int N;
	scanf("%d", &N);
	while(N--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		printf("%d\n", 196471-A[a][b][c]);		
	}
}