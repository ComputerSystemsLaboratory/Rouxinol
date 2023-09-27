#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
   
int main()
{
	int n=0;
	char w[11],t[1001];
	cin >> w >> t;
	for (int i = 0; i < 10; i++) {
		if (((int)w[i] >= 0x41)&&((int)w[i] <= 0x5a))
		w[i] = (char)((int)w[i]+32);
	}
	while (!(strstr(t,"END_OF_TEXT"))) {
		for (int i = 0; i < 1000; i++) {
			if (((int)t[i] >= 0x41)&&((int)t[i] <= 0x5a))
			t[i] = (char)((int)t[i]+32);
		}
		if(strcmp(w,t)==0)
			n++;
		cin >> t;
	}
	cout << n << endl;
	return 0;
}