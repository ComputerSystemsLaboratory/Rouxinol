#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
   
int main()
{
	int e, n=0;
	char w[11],t[1001];
	cin >> w >> t;
	for (int i = 0; i < 10; i++) {
		e = (int)w[i];
		if ((e >= 0x41)&&(e <= 0x5a))
			e += 32;
		w[i] = (char)e;
	}
	while (!(strstr(t,"END_OF_TEXT"))) {
		for (int i = 0; i < 1000; i++) {
			e = (int)t[i];
			if ((e >= 0x41)&&(e <= 0x5a))
				e += 32;
			t[i] = (char)e;
		}
		if(strcmp(w,t)==0)
			n++;
		cin >> t;
	}
	cout << n << endl;
	return 0;
}