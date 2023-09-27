#include<string.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char w[16], wc[16] , t[1024],tc[1024];
	int c = 0;
	cin >> wc;
	strcpy(w, wc);
	for (int i = 0;; i++){
		w[i] = tolower(wc[i]);
		if (wc[i] == '\0')break;
	}
	while (1){
		cin >> tc;
		if (!(strcmp("END_OF_TEXT", tc))){
			break;
		}
		strcpy(t, tc);
		for (int i = 0;; i++){
			t[i] = tolower(tc[i]);
			if (tc[i] == '\0')break;
		}
		if (!(strcmp(w, t))){
			c++;
		}
	}
	cout << c<<endl;
	return 0;
}