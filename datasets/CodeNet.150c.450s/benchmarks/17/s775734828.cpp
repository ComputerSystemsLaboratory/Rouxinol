#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int in[5], n[5]={0,1,2,3,4}, tmp, i, j;

	cin >> in[0] >> in[1] >> in[2] >> in[3] >> in[4];
	for(i=0;i<5;i++) {
		for(j=i;j<5;j++) {
			if(in[n[j]] > in[n[i]]) {
				tmp = n[j];
				n[j] = n[i];
				n[i] = tmp;
			}
		}
	}
	printf("%d %d %d %d %d\n", in[n[0]] ,in[n[1]] ,in[n[2]] ,in[n[3]] ,in[n[4]]);
	return 0;
}