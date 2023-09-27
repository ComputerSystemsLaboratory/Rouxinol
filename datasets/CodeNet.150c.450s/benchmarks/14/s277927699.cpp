//============================================================================
// Name        : ITP_1_5_D.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n,x;
	cin >> n;
	for(int i=1;i<=n;++i) {
		if(i%3==0) {
			printf(" %d",i);
		} else {
			for(x=i;x>0;x/=10) {
				if(x%10==3) {
					printf(" %d",i);
					break;
				}
			}
		}
	}
	printf("\n");
	return 0;
}