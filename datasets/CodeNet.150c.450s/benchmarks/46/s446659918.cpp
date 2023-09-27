//============================================================================
// Name        : ITP_1_7_B.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int i,j,k,n,x,c=0;
	do {
		cin >> n >> x;
		if (n==0 && x==0 ) break;
		c=0;
		for(i=1;i<=n;++i) {
			for(j=i+1;j<=n;++j) {
				for(k=j+1;k<=n;++k) {
					if(i+j+k==x) {
						c++;
					}
				}
			}
		}
		printf("%d\n",c);
	} while(1);
	return 0;
}